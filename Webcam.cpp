#include <QtGui>
#include "Webcam.h"

Webcam::Webcam(int dev,int fps, int width, int height) {
	timerId = 0;
	frameRate = fps;
	webcam = VideoCapture(dev);
	
	//sets the width and height of the frame to be captured
	// webcam.set(CV_CAP_PROP_FPS, fps);
 //    webcam.set(CV_CAP_PROP_FRAME_WIDTH, width);
 //    webcam.set(CV_CAP_PROP_FRAME_HEIGHT, height);
	
	setFixedSize(width, height);

	qDebug() << webcam.get(CV_CAP_PROP_FPS);
	int codec =  CV_FOURCC('P','I','M','1');
	writer.open("sur.avi", 
	 	codec, 20, Size(width, height), true);
}

Webcam::~Webcam() {
	webcam.release();
	//cvReleaseVideoWriter(&writer);
	writer.release();
}

void Webcam::showEvent(QShowEvent *event)
{
	nframes = 0; // init 
	timerId = startTimer(1000 / frameRate); // in msec 
	time.start(); // start time
}

void Webcam::hideEvent(QHideEvent *event) {
	killTimer(timerId);
}

void Webcam::timerEvent(QTimerEvent *event) {
	if (event->timerId() == timerId) {
		
		QImage image = captureFrame();
		pixmap = QPixmap::fromImage(image);
		repaint();

		if (++nframes == 50) {
			qDebug("frame rate: %f", (float)nframes * 1000 / time.elapsed());
			nframes = 0;
			time.restart();
		}
	} else {
		QWidget::timerEvent(event);
	}

}

void Webcam::paintEvent(QPaintEvent *event) {
	QRectF rect = QRectF(QPoint(), size());
	QPainter painter(this);
	painter.drawPixmap(rect, pixmap, rect);

}

QImage Webcam::captureFrame() {
	Mat frame;
    webcam.read(frame);
    flip(frame, frame, 1);
    saveFrame(frame);

    QImage image = getQImageFromFrame(frame);
    return image;
}

QImage Webcam::getQImageFromFrame(Mat frame) {
	QImage img = QImage((uchar*) frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
    return img.rgbSwapped();
}

void Webcam::saveFrame(Mat frame) {
	// Save the frame to writer
    // IplImage copy = frame;
    // IplImage *iplimg = &copy;
    // cvWriteFrame(writer, iplimg);
    writer.write(frame);
}