/********************************************************************************
** Form generated from reading UI file 'kinecttest.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KINECTTEST_H
#define UI_KINECTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KinectTestClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KinectTestClass)
    {
        if (KinectTestClass->objectName().isEmpty())
            KinectTestClass->setObjectName(QStringLiteral("KinectTestClass"));
        KinectTestClass->resize(600, 400);
        centralWidget = new QWidget(KinectTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 381, 261));
        KinectTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KinectTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        KinectTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KinectTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        KinectTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KinectTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KinectTestClass->setStatusBar(statusBar);

        retranslateUi(KinectTestClass);

        QMetaObject::connectSlotsByName(KinectTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *KinectTestClass)
    {
        KinectTestClass->setWindowTitle(QApplication::translate("KinectTestClass", "KinectTest", 0));
        label->setText(QApplication::translate("KinectTestClass", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class KinectTestClass: public Ui_KinectTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KINECTTEST_H
