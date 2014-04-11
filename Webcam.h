#ifndef WEBCAM_H 
#define WEBCAM_H

#include <QWidget> 
#include <QTime> 
#include "opencv2/core/core_c.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

class Webcam: public QWidget {

	Q_OBJECT

public: 
	Webcam(int dev,int fps, int width, int height); 
	~Webcam();

protected:
	void showEvent(QShowEvent *event); 
	void hideEvent(QHideEvent *event); 
	void timerEvent(QTimerEvent *event); 
	void paintEvent(QPaintEvent *event);

private:
	VideoCapture webcam;
	int timerId;
	int frameRate; // inputframerate
	QPixmap pixmap;
	int nframes; // used to calculate actual frame rate 
	QTime time; // used to calculate actual frame rate

	QImage captureFrame();
	QImage getQImageFromFrame(Mat frame);
	void saveFrame(Mat frame);

	//CvVideoWriter *writer;
	VideoWriter writer;
};

#endif