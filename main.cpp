#include <QApplication>
#include "mainwindow.h"
#include "VideoWidget.h"
#include "stdio.h"

int main(int argc, char **args) {
	QApplication app(argc, args);

    MainWindow s;
    s.show();

//	int dev = 0; // default device
//	int fps = 20; // 20 frames per second
//	string date = "";
//	int width = 640;
//	int height = 480;
//	VideoWidget *view = new VideoWidget(dev, fps, width, height);
//	VideoWidget *view1 = new VideoWidget(dev, date, width, height);
//	view->show();
//	view1->show();

	return app.exec();
}
