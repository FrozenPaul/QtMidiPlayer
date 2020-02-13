/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSlider *sliderTimeline;
    QLabel *labelTime;
    QLabel *label;
    QLabel *labelTotal;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonPause;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxSpeed;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(408, 267);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sliderTimeline = new QSlider(centralwidget);
        sliderTimeline->setObjectName(QString::fromUtf8("sliderTimeline"));
        sliderTimeline->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderTimeline);

        labelTime = new QLabel(centralwidget);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));

        horizontalLayout->addWidget(labelTime);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        labelTotal = new QLabel(centralwidget);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));

        horizontalLayout->addWidget(labelTotal);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonPlay = new QPushButton(centralwidget);
        pushButtonPlay->setObjectName(QString::fromUtf8("pushButtonPlay"));

        horizontalLayout_2->addWidget(pushButtonPlay);

        pushButtonPause = new QPushButton(centralwidget);
        pushButtonPause->setObjectName(QString::fromUtf8("pushButtonPause"));

        horizontalLayout_2->addWidget(pushButtonPause);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBoxSpeed = new QDoubleSpinBox(centralwidget);
        doubleSpinBoxSpeed->setObjectName(QString::fromUtf8("doubleSpinBoxSpeed"));
        doubleSpinBoxSpeed->setMinimum(0.100000000000000);
        doubleSpinBoxSpeed->setMaximum(10.000000000000000);
        doubleSpinBoxSpeed->setSingleStep(0.100000000000000);
        doubleSpinBoxSpeed->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxSpeed);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 408, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CxxMidi Player", nullptr));
        labelTime->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        labelTotal->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButtonPlay->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        pushButtonPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Speed:", nullptr));
        doubleSpinBoxSpeed->setSuffix(QCoreApplication::translate("MainWindow", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
