#include "kinecttest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	KinectTest w;
	w.show();
	return a.exec();
}
