#include <QApplication>
#include "Webcam.h"
#include "stdio.h"

int main(int argc, char **args) {
	QApplication app(argc, args);

	int dev = 0; // default device 
	int fps = 25; // 25 frames per second 
	int width = 640;
	int height = 480;
	Webcam *view = new Webcam(dev, fps, width, height);
	view->show();
	return app.exec();
}