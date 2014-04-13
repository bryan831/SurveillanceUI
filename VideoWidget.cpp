#include <QtGui>
#include "VideoWidget.h"

// Live mode constructor
VideoWidget::VideoWidget(int dev, int fps, int width, int height) {
	liveMode = true;
	//camera.open("dev.avi");
	camera.open(dev);

	// delete later
    //setFixedSize(width, height);

	// Open a writer to save the live feed
	writer.open("sur.avi", //filename
	 	CV_FOURCC('P','I','M','1'), //codec
	 	20, //fps
	 	Size(width, height), //size
	 	true); // color

	timerId = 0;
	frameRate = fps;
}

// History mode constructor
VideoWidget::VideoWidget(int dev, string date, int width, int height) {
	liveMode = false;
	playback.open("dev.avi");
	frameCount = 0;
	// delete later
    //setFixedSize(width, height);

	timerId = 0;
	frameRate = 20;
}

VideoWidget::~VideoWidget() {
	camera.release();
	writer.release();
	playback.release();
}

void VideoWidget::showEvent(QShowEvent *event)
{
	nframes = 0; // init 
	timerId = startTimer(1000 / frameRate); // in msec 
	time.start(); // start time
}

void VideoWidget::hideEvent(QHideEvent *event) {
	//killTimer(timerId);
}

void VideoWidget::timerEvent(QTimerEvent *event) {
	if (event->timerId() == timerId) {
		
		Mat frame;
		if (liveMode == true) {
			frame = captureFrame();
		} else {
			frame = playFrame();
			if (frameCount < playback.get(CV_CAP_PROP_POS_FRAMES)) {
				frameCount = playback.get(CV_CAP_PROP_POS_FRAMES);
			} else {
				setPlaybackFrame(1);
			}
			qDebug() << frameCount;
		}

		if (frame.empty() == false) {
			QImage image = getQImageFromFrame(frame);
			pixmap = QPixmap::fromImage(image);
			repaint();
		}

		if (++nframes == frameRate*2) {
			qDebug("frame rate: %f", (float)nframes * 1000 / time.elapsed());
			nframes = 0;
			time.restart();
		}
	} else {
		QWidget::timerEvent(event);
	}
}

void VideoWidget::paintEvent(QPaintEvent *event) {
	QRectF rect = QRectF(QPoint(), size());
	QPainter painter(this);
	painter.drawPixmap(rect, pixmap, rect);

}

Mat VideoWidget::captureFrame() {
	Mat frame;
	if (camera.isOpened())
		camera.read(frame);
	else
		qDebug("Camera not initialized properly!");
	flip(frame, frame, 1); // mirror flip the image, as there is a problem with capturing
	saveFrame(frame);

	return frame;
}

QImage VideoWidget::getQImageFromFrame(Mat frame) {
	QImage img = QImage((uchar*) frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
	return img.rgbSwapped();
}

void VideoWidget::saveFrame(Mat frame) {
	writer.write(frame);
}

Mat VideoWidget::playFrame() {
	Mat frame;
	if (playback.isOpened()) {
		playback.read(frame);
	} else {
		qDebug("Playback not initialized properly!");
	}

	return frame;
}

void VideoWidget::setPlaybackFrame(int index) {
	qDebug() << index;
	qDebug() << playback.set(CV_CAP_PROP_POS_AVI_RATIO, 0);
}
