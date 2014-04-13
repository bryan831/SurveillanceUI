#include <QtGui>
#include "VideoWidget.h"
#include <ctime>
#include <sstream>

// Live mode constructor
VideoWidget::VideoWidget(int dev, int fps, int width, int height) {
	liveMode = true;
	//camera.open("dev.avi");
	camera.open(dev);

	// delete later
    //setFixedSize(width, height);

	time_t t = std::time(0);   // get time now
    struct tm * now = localtime( & t );
    int day = (now->tm_mday);
    int month = (now->tm_mon + 1);
    int year = (now->tm_year + 1900);
   	
    std::ostringstream oss;
    oss << dev;
    oss << "_";
    if (day < 10)
    	oss << "0";
    oss << day;
    if (month < 10)
    	oss << "0";
    oss << month;
    oss << year;
    
    string filename = "sur_" + oss.str() + ".avi";

	// Open a writer to save the live feed
    writer.open(filename, //filename
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
	std::ostringstream oss;
    oss << dev;
    oss << "_";
    oss << date;
    readFilename = "sur_" + oss.str() + ".avi";

	playback.open(readFilename);
	frameCount = 0;

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
				//setPlaybackFrame(1);
				playback.open(readFilename);
				frameCount = 0;

			}
			//qDebug() << frameCount;
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
	//qDebug() << index;
	//qDebug() << playback.set(CV_CAP_PROP_POS_AVI_RATIO, 0);
}
