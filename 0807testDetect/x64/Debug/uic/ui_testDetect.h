/********************************************************************************
** Form generated from reading UI file 'testDetect.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDETECT_H
#define UI_TESTDETECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testDetectClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testDetectClass)
    {
        if (testDetectClass->objectName().isEmpty())
            testDetectClass->setObjectName(QString::fromUtf8("testDetectClass"));
        testDetectClass->resize(600, 400);
        menuBar = new QMenuBar(testDetectClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        testDetectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testDetectClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        testDetectClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(testDetectClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        testDetectClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(testDetectClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        testDetectClass->setStatusBar(statusBar);

        retranslateUi(testDetectClass);

        QMetaObject::connectSlotsByName(testDetectClass);
    } // setupUi

    void retranslateUi(QMainWindow *testDetectClass)
    {
        testDetectClass->setWindowTitle(QCoreApplication::translate("testDetectClass", "testDetect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testDetectClass: public Ui_testDetectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDETECT_H
