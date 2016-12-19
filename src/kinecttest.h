#ifndef KINECTTEST_H
#define KINECTTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_kinecttest.h"

namespace Ui {
	class KinectTest;
}

class KinectTest : public QMainWindow
{
	Q_OBJECT

public:
	KinectTest(QWidget *parent = 0);
	~KinectTest();

private slots:
	void updateKinectData();

private:
	void init();
	Ui::KinectTestClass *ui;
};

#endif // KINECTTEST_H
