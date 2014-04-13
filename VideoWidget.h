#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H

#include <QWidget>
#include <QTime>
#include "opencv2/core/core_c.h"
#include "opencv2/highgui/highgui.hpp"

using namespace cv;

class VideoWidget: public QWidget {

	Q_OBJECT

public:
	//VideoWidget(QWidget*);
	VideoWidget(int dev,int fps, int width, int height); 
	VideoWidget(int dev,string date, int width, int height); 
	~VideoWidget();

	void setPlaybackFrame(int index);

protected:
	void showEvent(QShowEvent *event); 
	void hideEvent(QHideEvent *event); 
	void timerEvent(QTimerEvent *event); 
	void paintEvent(QPaintEvent *event);

private:
	bool liveMode;

	int timerId;
	int frameRate; // input frame rate
	QPixmap pixmap;
	int nframes; // used to calculate actual frame rate 
	QTime time; // used to calculate actual frame rate

	// Live mode
	VideoCapture camera;
	VideoWriter writer;

	Mat captureFrame();
	QImage getQImageFromFrame(Mat frame);
	void saveFrame(Mat frame);
	
	// History Mode
	VideoCapture playback;
	int frameCount;

	Mat playFrame();
};

#endif