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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *sliderTimeline;
    QLabel *labelTime;
    QLabel *label;
    QLabel *labelTotal;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonPause;
    QPushButton *pushButtonStop;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxSpeed;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QPushButton *G2s;
    QPushButton *F2;
    QPushButton *E7;
    QPushButton *G3s;
    QPushButton *G4s;
    QPushButton *E2;
    QPushButton *C6;
    QPushButton *G5;
    QPushButton *D2;
    QPushButton *A0s;
    QPushButton *G2;
    QPushButton *E1;
    QPushButton *C3;
    QPushButton *A2;
    QPushButton *C8;
    QPushButton *A5s;
    QPushButton *F4;
    QPushButton *E5;
    QPushButton *G1;
    QPushButton *A4s;
    QPushButton *F4s;
    QPushButton *B5;
    QPushButton *B1;
    QPushButton *D5;
    QPushButton *C7;
    QPushButton *A6;
    QPushButton *A3;
    QPushButton *E4;
    QPushButton *F7;
    QPushButton *G5s;
    QPushButton *F3s;
    QPushButton *C2;
    QPushButton *B3;
    QPushButton *E6;
    QPushButton *B2;
    QPushButton *D2s;
    QPushButton *F6s;
    QPushButton *D1s;
    QPushButton *C5s;
    QPushButton *A5;
    QPushButton *C3s;
    QPushButton *G7s;
    QPushButton *F6;
    QPushButton *A3s;
    QPushButton *D5s;
    QPushButton *D3s;
    QPushButton *D6;
    QPushButton *D7;
    QPushButton *A7;
    QPushButton *G6s;
    QPushButton *C7s;
    QPushButton *C6s;
    QPushButton *D3;
    QPushButton *F5s;
    QPushButton *F5;
    QPushButton *B7;
    QPushButton *F7s;
    QPushButton *A6s;
    QPushButton *G4;
    QPushButton *A7s;
    QPushButton *A2s;
    QPushButton *D1;
    QPushButton *B0;
    QPushButton *G3;
    QPushButton *F3;
    QPushButton *C2s;
    QPushButton *B6;
    QPushButton *C1s;
    QPushButton *A1s;
    QPushButton *D7s;
    QPushButton *C1;
    QPushButton *B4;
    QPushButton *F2s;
    QPushButton *A4;
    QPushButton *E3;
    QPushButton *A0;
    QPushButton *C4s;
    QPushButton *C5;
    QPushButton *D6s;
    QPushButton *G7;
    QPushButton *D4s;
    QPushButton *G1s;
    QPushButton *F1;
    QPushButton *C4;
    QPushButton *G6;
    QPushButton *A1;
    QPushButton *D4;
    QPushButton *F1s;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1582, 531);
        MainWindow->setMinimumSize(QSize(1582, 531));
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"	height: 500px;\n"
"    width: 900px;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton:pressed{\n"
"background:purple;\n"
"}"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 40, 1561, 221));
        textBrowser->setMouseTracking(true);
        textBrowser->setLayoutDirection(Qt::LeftToRight);
        textBrowser->setStyleSheet(QString::fromUtf8("#textBrowser{\n"
"	/*color: white;\n"
"	border-image: url(\"G:/University/images/MidiPianoBackground.jpg\");*/\n"
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 387, 1561, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sliderTimeline = new QSlider(layoutWidget);
        sliderTimeline->setObjectName(QString::fromUtf8("sliderTimeline"));
        sliderTimeline->setStyleSheet(QString::fromUtf8(""));
        sliderTimeline->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderTimeline);

        labelTime = new QLabel(layoutWidget);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));

        horizontalLayout->addWidget(labelTime);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        labelTotal = new QLabel(layoutWidget);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));

        horizontalLayout->addWidget(labelTotal);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(9, 417, 1561, 62));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonPlay = new QPushButton(layoutWidget1);
        pushButtonPlay->setObjectName(QString::fromUtf8("pushButtonPlay"));
        pushButtonPlay->setStyleSheet(QString::fromUtf8("#pushButtonPlay{\n"
"	border-image: url(\"G:/University/images/Play.png\");\n"
"	width: 60px;\n"
"	height: 60px;\n"
"}\n"
"#pushButtonPlay:pressed{\n"
"	margin: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonPlay);

        pushButtonPause = new QPushButton(layoutWidget1);
        pushButtonPause->setObjectName(QString::fromUtf8("pushButtonPause"));
        pushButtonPause->setStyleSheet(QString::fromUtf8("#pushButtonPause{\n"
"	border-image: url(\"G:/University/images/Pause.png\");\n"
"	width: 60px;\n"
"	height: 60px;\n"
"}\n"
"#pushButtonPause:pressed{\n"
"	margin: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonPause);

        pushButtonStop = new QPushButton(layoutWidget1);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));
        pushButtonStop->setStyleSheet(QString::fromUtf8("#pushButtonStop{\n"
"	border-image: url(\"G:/University/images/Stop.png\");\n"
"	width: 60px;\n"
"	height: 60px;\n"
"}\n"
"#pushButtonStop:pressed{\n"
"	margin: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(pushButtonStop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBoxSpeed = new QDoubleSpinBox(layoutWidget1);
        doubleSpinBoxSpeed->setObjectName(QString::fromUtf8("doubleSpinBoxSpeed"));
        doubleSpinBoxSpeed->setMinimum(0.100000000000000);
        doubleSpinBoxSpeed->setMaximum(10.000000000000000);
        doubleSpinBoxSpeed->setSingleStep(0.100000000000000);
        doubleSpinBoxSpeed->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxSpeed);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 250, 1561, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(gridLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(1557, 120));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"	border: none;\n"
"}"));
        G2s = new QPushButton(groupBox);
        G2s->setObjectName(QString::fromUtf8("G2s"));
        G2s->setGeometry(QRect(410, 10, 20, 71));
        G2s->setStyleSheet(QString::fromUtf8("#G2s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G2s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        F2 = new QPushButton(groupBox);
        F2->setObjectName(QString::fromUtf8("F2"));
        F2->setGeometry(QRect(360, 10, 31, 101));
        F2->setStyleSheet(QString::fromUtf8("#F2 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F2:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        E7 = new QPushButton(groupBox);
        E7->setObjectName(QString::fromUtf8("E7"));
        E7->setGeometry(QRect(1380, 10, 31, 101));
        E7->setStyleSheet(QString::fromUtf8("#E7 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#E7:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        G3s = new QPushButton(groupBox);
        G3s->setObjectName(QString::fromUtf8("G3s"));
        G3s->setGeometry(QRect(620, 10, 20, 71));
        G3s->setStyleSheet(QString::fromUtf8("#G3s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G3s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        G4s = new QPushButton(groupBox);
        G4s->setObjectName(QString::fromUtf8("G4s"));
        G4s->setGeometry(QRect(830, 10, 20, 71));
        G4s->setStyleSheet(QString::fromUtf8("#G4s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G4s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        E2 = new QPushButton(groupBox);
        E2->setObjectName(QString::fromUtf8("E2"));
        E2->setGeometry(QRect(330, 10, 31, 101));
        E2->setStyleSheet(QString::fromUtf8("#E2 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#E2:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        C6 = new QPushButton(groupBox);
        C6->setObjectName(QString::fromUtf8("C6"));
        C6->setGeometry(QRect(1110, 10, 31, 101));
        C6->setStyleSheet(QString::fromUtf8("#C6 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C6:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        G5 = new QPushButton(groupBox);
        G5->setObjectName(QString::fromUtf8("G5"));
        G5->setGeometry(QRect(1020, 10, 31, 101));
        G5->setStyleSheet(QString::fromUtf8("#G5 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/G.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G5:pressed{\n"
"border-image: url(\"G:/University/images/Gpurple.png\");\n"
"}"));
        D2 = new QPushButton(groupBox);
        D2->setObjectName(QString::fromUtf8("D2"));
        D2->setGeometry(QRect(300, 10, 31, 101));
        D2->setStyleSheet(QString::fromUtf8("#D2 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/D.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D2:pressed{\n"
"border-image: url(\"G:/University/images/Dpurple.png\");\n"
"}"));
        A0s = new QPushButton(groupBox);
        A0s->setObjectName(QString::fromUtf8("A0s"));
        A0s->setGeometry(QRect(20, 10, 21, 71));
        A0s->setStyleSheet(QString::fromUtf8("#A0s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A0s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        G2 = new QPushButton(groupBox);
        G2->setObjectName(QString::fromUtf8("G2"));
        G2->setGeometry(QRect(390, 10, 31, 101));
        G2->setStyleSheet(QString::fromUtf8("#G2 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/G.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G2:pressed{\n"
"border-image: url(\"G:/University/images/Gpurple.png\");\n"
"}"));
        E1 = new QPushButton(groupBox);
        E1->setObjectName(QString::fromUtf8("E1"));
        E1->setGeometry(QRect(120, 10, 31, 101));
        E1->setStyleSheet(QString::fromUtf8("#E1 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#E1:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        C3 = new QPushButton(groupBox);
        C3->setObjectName(QString::fromUtf8("C3"));
        C3->setGeometry(QRect(480, 10, 31, 101));
        C3->setStyleSheet(QString::fromUtf8("#C3 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C3:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        A2 = new QPushButton(groupBox);
        A2->setObjectName(QString::fromUtf8("A2"));
        A2->setGeometry(QRect(420, 10, 31, 101));
        A2->setStyleSheet(QString::fromUtf8("#A2 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/A.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A2:pressed{\n"
"border-image: url(\"G:/University/images/Apurple.png\");\n"
"}"));
        C8 = new QPushButton(groupBox);
        C8->setObjectName(QString::fromUtf8("C8"));
        C8->setGeometry(QRect(1530, 10, 31, 101));
        C8->setStyleSheet(QString::fromUtf8("#C8 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C8.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C8:pressed{\n"
"border-image: url(\"G:/University/images/C8purple.png\");\n"
"}"));
        A5s = new QPushButton(groupBox);
        A5s->setObjectName(QString::fromUtf8("A5s"));
        A5s->setGeometry(QRect(1070, 10, 21, 71));
        A5s->setStyleSheet(QString::fromUtf8("#A5s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A5s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        F4 = new QPushButton(groupBox);
        F4->setObjectName(QString::fromUtf8("F4"));
        F4->setGeometry(QRect(780, 10, 31, 101));
        F4->setStyleSheet(QString::fromUtf8("#F4 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"#F4:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        E5 = new QPushButton(groupBox);
        E5->setObjectName(QString::fromUtf8("E5"));
        E5->setGeometry(QRect(960, 10, 31, 101));
        E5->setStyleSheet(QString::fromUtf8("#E5 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#E5:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        G1 = new QPushButton(groupBox);
        G1->setObjectName(QString::fromUtf8("G1"));
        G1->setGeometry(QRect(180, 10, 31, 101));
        G1->setStyleSheet(QString::fromUtf8("#G1 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/G.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G1:pressed{\n"
"border-image: url(\"G:/University/images/Gpurple.png\");\n"
"}"));
        A4s = new QPushButton(groupBox);
        A4s->setObjectName(QString::fromUtf8("A4s"));
        A4s->setGeometry(QRect(860, 10, 21, 71));
        A4s->setStyleSheet(QString::fromUtf8("#A4s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A4s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        F4s = new QPushButton(groupBox);
        F4s->setObjectName(QString::fromUtf8("F4s"));
        F4s->setGeometry(QRect(800, 10, 20, 71));
        F4s->setStyleSheet(QString::fromUtf8("#F4s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F4s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        B5 = new QPushButton(groupBox);
        B5->setObjectName(QString::fromUtf8("B5"));
        B5->setGeometry(QRect(1080, 10, 31, 101));
        B5->setStyleSheet(QString::fromUtf8("#B5 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#B5:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        B1 = new QPushButton(groupBox);
        B1->setObjectName(QString::fromUtf8("B1"));
        B1->setGeometry(QRect(240, 10, 31, 101));
        B1->setStyleSheet(QString::fromUtf8("#B1 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#B1:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        D5 = new QPushButton(groupBox);
        D5->setObjectName(QString::fromUtf8("D5"));
        D5->setGeometry(QRect(930, 10, 31, 101));
        D5->setStyleSheet(QString::fromUtf8("#D5 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/D.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D5:pressed{\n"
"border-image: url(\"G:/University/images/Dpurple.png\");\n"
"}"));
        C7 = new QPushButton(groupBox);
        C7->setObjectName(QString::fromUtf8("C7"));
        C7->setGeometry(QRect(1320, 10, 31, 101));
        C7->setStyleSheet(QString::fromUtf8("#C7 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C7:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        A6 = new QPushButton(groupBox);
        A6->setObjectName(QString::fromUtf8("A6"));
        A6->setGeometry(QRect(1260, 10, 31, 101));
        A6->setStyleSheet(QString::fromUtf8("#A6 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/A.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A6:pressed{\n"
"border-image: url(\"G:/University/images/Apurple.png\");\n"
"}"));
        A3 = new QPushButton(groupBox);
        A3->setObjectName(QString::fromUtf8("A3"));
        A3->setGeometry(QRect(630, 10, 31, 101));
        A3->setStyleSheet(QString::fromUtf8("#A3 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/A.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A3:pressed{\n"
"border-image: url(\"G:/University/images/Apurple.png\");\n"
"}"));
        E4 = new QPushButton(groupBox);
        E4->setObjectName(QString::fromUtf8("E4"));
        E4->setGeometry(QRect(750, 10, 31, 101));
        E4->setStyleSheet(QString::fromUtf8("#E4 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#E4:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        F7 = new QPushButton(groupBox);
        F7->setObjectName(QString::fromUtf8("F7"));
        F7->setGeometry(QRect(1410, 10, 31, 101));
        F7->setStyleSheet(QString::fromUtf8("#F7 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F7:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        G5s = new QPushButton(groupBox);
        G5s->setObjectName(QString::fromUtf8("G5s"));
        G5s->setGeometry(QRect(1040, 10, 20, 71));
        G5s->setStyleSheet(QString::fromUtf8("#G5s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G5s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        F3s = new QPushButton(groupBox);
        F3s->setObjectName(QString::fromUtf8("F3s"));
        F3s->setGeometry(QRect(590, 10, 20, 71));
        F3s->setStyleSheet(QString::fromUtf8("#F3s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F3s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        C2 = new QPushButton(groupBox);
        C2->setObjectName(QString::fromUtf8("C2"));
        C2->setGeometry(QRect(270, 10, 31, 101));
        C2->setStyleSheet(QString::fromUtf8("#C2 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C2:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        B3 = new QPushButton(groupBox);
        B3->setObjectName(QString::fromUtf8("B3"));
        B3->setGeometry(QRect(660, 10, 31, 101));
        B3->setStyleSheet(QString::fromUtf8("#B3 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#B3:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        E6 = new QPushButton(groupBox);
        E6->setObjectName(QString::fromUtf8("E6"));
        E6->setGeometry(QRect(1170, 10, 31, 101));
        E6->setStyleSheet(QString::fromUtf8("#E6 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#E6:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        B2 = new QPushButton(groupBox);
        B2->setObjectName(QString::fromUtf8("B2"));
        B2->setGeometry(QRect(450, 10, 31, 101));
        B2->setStyleSheet(QString::fromUtf8("#B2 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#B2:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        D2s = new QPushButton(groupBox);
        D2s->setObjectName(QString::fromUtf8("D2s"));
        D2s->setGeometry(QRect(320, 10, 20, 71));
        D2s->setStyleSheet(QString::fromUtf8("#D2s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D2s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        F6s = new QPushButton(groupBox);
        F6s->setObjectName(QString::fromUtf8("F6s"));
        F6s->setGeometry(QRect(1220, 10, 20, 71));
        F6s->setStyleSheet(QString::fromUtf8("#F6s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F6s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        D1s = new QPushButton(groupBox);
        D1s->setObjectName(QString::fromUtf8("D1s"));
        D1s->setGeometry(QRect(110, 10, 20, 71));
        D1s->setStyleSheet(QString::fromUtf8("#D1s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D1s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        C5s = new QPushButton(groupBox);
        C5s->setObjectName(QString::fromUtf8("C5s"));
        C5s->setGeometry(QRect(920, 10, 20, 71));
        C5s->setStyleSheet(QString::fromUtf8("#C5s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C5s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        A5 = new QPushButton(groupBox);
        A5->setObjectName(QString::fromUtf8("A5"));
        A5->setGeometry(QRect(1050, 10, 31, 101));
        A5->setStyleSheet(QString::fromUtf8("#A5 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/A.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"#A5:pressed{\n"
"border-image: url(\"G:/University/images/Apurple.png\");\n"
"}"));
        C3s = new QPushButton(groupBox);
        C3s->setObjectName(QString::fromUtf8("C3s"));
        C3s->setGeometry(QRect(500, 10, 20, 71));
        C3s->setStyleSheet(QString::fromUtf8("#C3s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C3s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        G7s = new QPushButton(groupBox);
        G7s->setObjectName(QString::fromUtf8("G7s"));
        G7s->setGeometry(QRect(1460, 10, 20, 71));
        G7s->setStyleSheet(QString::fromUtf8("#G7s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G7s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        F6 = new QPushButton(groupBox);
        F6->setObjectName(QString::fromUtf8("F6"));
        F6->setGeometry(QRect(1200, 10, 31, 101));
        F6->setStyleSheet(QString::fromUtf8("#F6 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F6:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        A3s = new QPushButton(groupBox);
        A3s->setObjectName(QString::fromUtf8("A3s"));
        A3s->setGeometry(QRect(650, 10, 21, 71));
        A3s->setStyleSheet(QString::fromUtf8("#A3s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A3s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        D5s = new QPushButton(groupBox);
        D5s->setObjectName(QString::fromUtf8("D5s"));
        D5s->setGeometry(QRect(950, 10, 20, 71));
        D5s->setStyleSheet(QString::fromUtf8("#D5s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D5s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        D3s = new QPushButton(groupBox);
        D3s->setObjectName(QString::fromUtf8("D3s"));
        D3s->setGeometry(QRect(530, 10, 20, 71));
        D3s->setStyleSheet(QString::fromUtf8("#D3s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D3s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        D6 = new QPushButton(groupBox);
        D6->setObjectName(QString::fromUtf8("D6"));
        D6->setGeometry(QRect(1140, 10, 31, 101));
        D6->setStyleSheet(QString::fromUtf8("#D6 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/D.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D6:pressed{\n"
"border-image: url(\"G:/University/images/Dpurple.png\");\n"
"}"));
        D7 = new QPushButton(groupBox);
        D7->setObjectName(QString::fromUtf8("D7"));
        D7->setGeometry(QRect(1350, 10, 31, 101));
        D7->setStyleSheet(QString::fromUtf8("#D7 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/D.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D7:pressed{\n"
"border-image: url(\"G:/University/images/Dpurple.png\");\n"
"}"));
        A7 = new QPushButton(groupBox);
        A7->setObjectName(QString::fromUtf8("A7"));
        A7->setGeometry(QRect(1470, 10, 31, 101));
        A7->setStyleSheet(QString::fromUtf8("#A7 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/A.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A7:pressed{\n"
"border-image: url(\"G:/University/images/Apurple.png\");\n"
"}"));
        G6s = new QPushButton(groupBox);
        G6s->setObjectName(QString::fromUtf8("G6s"));
        G6s->setGeometry(QRect(1250, 10, 20, 71));
        G6s->setStyleSheet(QString::fromUtf8("#G6s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G6s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        C7s = new QPushButton(groupBox);
        C7s->setObjectName(QString::fromUtf8("C7s"));
        C7s->setGeometry(QRect(1340, 10, 20, 71));
        C7s->setStyleSheet(QString::fromUtf8("#C7s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C7s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        C6s = new QPushButton(groupBox);
        C6s->setObjectName(QString::fromUtf8("C6s"));
        C6s->setGeometry(QRect(1130, 10, 20, 71));
        C6s->setStyleSheet(QString::fromUtf8("#C6s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C6s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        D3 = new QPushButton(groupBox);
        D3->setObjectName(QString::fromUtf8("D3"));
        D3->setGeometry(QRect(510, 10, 31, 101));
        D3->setStyleSheet(QString::fromUtf8("#D3 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/D.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D3:pressed{\n"
"border-image: url(\"G:/University/images/Dpurple.png\");\n"
"}"));
        F5s = new QPushButton(groupBox);
        F5s->setObjectName(QString::fromUtf8("F5s"));
        F5s->setGeometry(QRect(1010, 10, 20, 71));
        F5s->setStyleSheet(QString::fromUtf8("#F5s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F5s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        F5 = new QPushButton(groupBox);
        F5->setObjectName(QString::fromUtf8("F5"));
        F5->setGeometry(QRect(990, 10, 31, 101));
        F5->setStyleSheet(QString::fromUtf8("#F5 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F5:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        B7 = new QPushButton(groupBox);
        B7->setObjectName(QString::fromUtf8("B7"));
        B7->setGeometry(QRect(1500, 10, 31, 101));
        B7->setStyleSheet(QString::fromUtf8("#B7 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#B7:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        F7s = new QPushButton(groupBox);
        F7s->setObjectName(QString::fromUtf8("F7s"));
        F7s->setGeometry(QRect(1430, 10, 20, 71));
        F7s->setStyleSheet(QString::fromUtf8("#F7s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F7s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        A6s = new QPushButton(groupBox);
        A6s->setObjectName(QString::fromUtf8("A6s"));
        A6s->setGeometry(QRect(1280, 10, 21, 71));
        A6s->setStyleSheet(QString::fromUtf8("#A6s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A6s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}\n"
""));
        G4 = new QPushButton(groupBox);
        G4->setObjectName(QString::fromUtf8("G4"));
        G4->setGeometry(QRect(810, 10, 31, 101));
        G4->setStyleSheet(QString::fromUtf8("#G4 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/G.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G4:pressed{\n"
"border-image: url(\"G:/University/images/Gpurple.png\");\n"
"}"));
        A7s = new QPushButton(groupBox);
        A7s->setObjectName(QString::fromUtf8("A7s"));
        A7s->setGeometry(QRect(1490, 10, 21, 71));
        A7s->setStyleSheet(QString::fromUtf8("#A7s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A7s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        A2s = new QPushButton(groupBox);
        A2s->setObjectName(QString::fromUtf8("A2s"));
        A2s->setGeometry(QRect(440, 10, 21, 71));
        A2s->setStyleSheet(QString::fromUtf8("#A2s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A2s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        D1 = new QPushButton(groupBox);
        D1->setObjectName(QString::fromUtf8("D1"));
        D1->setGeometry(QRect(90, 10, 31, 101));
        D1->setStyleSheet(QString::fromUtf8("#D1 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/D.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D1:pressed{\n"
"border-image: url(\"G:/University/images/Dpurple.png\");\n"
"}"));
        B0 = new QPushButton(groupBox);
        B0->setObjectName(QString::fromUtf8("B0"));
        B0->setGeometry(QRect(30, 10, 31, 101));
        B0->setStyleSheet(QString::fromUtf8("#B0 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#B0:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        G3 = new QPushButton(groupBox);
        G3->setObjectName(QString::fromUtf8("G3"));
        G3->setGeometry(QRect(600, 10, 31, 101));
        G3->setStyleSheet(QString::fromUtf8("#G3 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/G.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G3:pressed{\n"
"border-image: url(\"G:/University/images/Gpurple.png\");\n"
"}"));
        F3 = new QPushButton(groupBox);
        F3->setObjectName(QString::fromUtf8("F3"));
        F3->setGeometry(QRect(570, 10, 31, 101));
        F3->setStyleSheet(QString::fromUtf8("#F3 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F3:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        C2s = new QPushButton(groupBox);
        C2s->setObjectName(QString::fromUtf8("C2s"));
        C2s->setGeometry(QRect(290, 10, 20, 71));
        C2s->setStyleSheet(QString::fromUtf8("#C2s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C2s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        B6 = new QPushButton(groupBox);
        B6->setObjectName(QString::fromUtf8("B6"));
        B6->setGeometry(QRect(1290, 10, 31, 101));
        B6->setStyleSheet(QString::fromUtf8("#B6 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#B6:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        C1s = new QPushButton(groupBox);
        C1s->setObjectName(QString::fromUtf8("C1s"));
        C1s->setGeometry(QRect(80, 10, 20, 71));
        C1s->setStyleSheet(QString::fromUtf8("#C1s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C1s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        A1s = new QPushButton(groupBox);
        A1s->setObjectName(QString::fromUtf8("A1s"));
        A1s->setGeometry(QRect(230, 10, 21, 71));
        A1s->setStyleSheet(QString::fromUtf8("#A1s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A1s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        D7s = new QPushButton(groupBox);
        D7s->setObjectName(QString::fromUtf8("D7s"));
        D7s->setGeometry(QRect(1370, 10, 20, 71));
        D7s->setStyleSheet(QString::fromUtf8("#D7s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D7s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        C1 = new QPushButton(groupBox);
        C1->setObjectName(QString::fromUtf8("C1"));
        C1->setGeometry(QRect(60, 10, 31, 101));
        C1->setStyleSheet(QString::fromUtf8("#C1 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C1:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        B4 = new QPushButton(groupBox);
        B4->setObjectName(QString::fromUtf8("B4"));
        B4->setGeometry(QRect(870, 10, 31, 101));
        B4->setStyleSheet(QString::fromUtf8("#B4 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#B4:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        F2s = new QPushButton(groupBox);
        F2s->setObjectName(QString::fromUtf8("F2s"));
        F2s->setGeometry(QRect(380, 10, 20, 71));
        F2s->setStyleSheet(QString::fromUtf8("#F2s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F2s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        A4 = new QPushButton(groupBox);
        A4->setObjectName(QString::fromUtf8("A4"));
        A4->setGeometry(QRect(840, 10, 31, 101));
        A4->setStyleSheet(QString::fromUtf8("#A4 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/A.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A4:pressed{\n"
"border-image: url(\"G:/University/images/Apurple.png\");\n"
"}"));
        E3 = new QPushButton(groupBox);
        E3->setObjectName(QString::fromUtf8("E3"));
        E3->setGeometry(QRect(540, 10, 31, 101));
        E3->setStyleSheet(QString::fromUtf8("#E3 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/E.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#E3:pressed{\n"
"border-image: url(\"G:/University/images/Epurple.png\");\n"
"}"));
        A0 = new QPushButton(groupBox);
        A0->setObjectName(QString::fromUtf8("A0"));
        A0->setGeometry(QRect(0, 10, 31, 101));
        A0->setStyleSheet(QString::fromUtf8("#A0 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A0:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        C4s = new QPushButton(groupBox);
        C4s->setObjectName(QString::fromUtf8("C4s"));
        C4s->setGeometry(QRect(710, 10, 20, 71));
        C4s->setStyleSheet(QString::fromUtf8("#C4s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C4s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        C5 = new QPushButton(groupBox);
        C5->setObjectName(QString::fromUtf8("C5"));
        C5->setGeometry(QRect(900, 10, 31, 101));
        C5->setStyleSheet(QString::fromUtf8("#C5 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"\n"
"#C5:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        D6s = new QPushButton(groupBox);
        D6s->setObjectName(QString::fromUtf8("D6s"));
        D6s->setGeometry(QRect(1160, 10, 20, 71));
        D6s->setStyleSheet(QString::fromUtf8("#D6s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D6s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        G7 = new QPushButton(groupBox);
        G7->setObjectName(QString::fromUtf8("G7"));
        G7->setGeometry(QRect(1440, 10, 31, 101));
        G7->setStyleSheet(QString::fromUtf8("#G7 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/G.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G7:pressed{\n"
"border-image: url(\"G:/University/images/Gpurple.png\");\n"
"}"));
        D4s = new QPushButton(groupBox);
        D4s->setObjectName(QString::fromUtf8("D4s"));
        D4s->setGeometry(QRect(740, 10, 20, 71));
        D4s->setStyleSheet(QString::fromUtf8("#D4s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D4s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        G1s = new QPushButton(groupBox);
        G1s->setObjectName(QString::fromUtf8("G1s"));
        G1s->setGeometry(QRect(200, 10, 20, 71));
        G1s->setStyleSheet(QString::fromUtf8("#G1s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G1s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        F1 = new QPushButton(groupBox);
        F1->setObjectName(QString::fromUtf8("F1"));
        F1->setGeometry(QRect(150, 10, 31, 101));
        F1->setStyleSheet(QString::fromUtf8("#F1 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F1:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        C4 = new QPushButton(groupBox);
        C4->setObjectName(QString::fromUtf8("C4"));
        C4->setGeometry(QRect(690, 10, 31, 101));
        C4->setStyleSheet(QString::fromUtf8("#C4 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#C4:pressed{\n"
"border-image: url(\"G:/University/images/Cpurple.png\");\n"
"}"));
        G6 = new QPushButton(groupBox);
        G6->setObjectName(QString::fromUtf8("G6"));
        G6->setGeometry(QRect(1230, 10, 31, 101));
        G6->setStyleSheet(QString::fromUtf8("#G6 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/G.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#G6:pressed{\n"
"border-image: url(\"G:/University/images/Gpurple.png\");\n"
"}"));
        A1 = new QPushButton(groupBox);
        A1->setObjectName(QString::fromUtf8("A1"));
        A1->setGeometry(QRect(210, 10, 31, 101));
        A1->setStyleSheet(QString::fromUtf8("#A1 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/A.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#A1:pressed{\n"
"border-image: url(\"G:/University/images/Apurple.png\");\n"
"}"));
        D4 = new QPushButton(groupBox);
        D4->setObjectName(QString::fromUtf8("D4"));
        D4->setGeometry(QRect(720, 10, 31, 101));
        D4->setStyleSheet(QString::fromUtf8("#D4 {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/D.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#D4:pressed{\n"
"border-image: url(\"G:/University/images/Dpurple.png\");\n"
"}"));
        F1s = new QPushButton(groupBox);
        F1s->setObjectName(QString::fromUtf8("F1s"));
        F1s->setGeometry(QRect(170, 10, 20, 71));
        F1s->setStyleSheet(QString::fromUtf8("#F1s {\n"
"background-color: transparent;\n"
"border-image: url(\"G:/University/images/C#Db.png\");\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#F1s:pressed{\n"
"border-image: url(\"G:/University/images/C#Dbpurple.png\");\n"
"}"));
        B0->raise();
        A0->raise();
        C1->raise();
        D1->raise();
        E1->raise();
        F1->raise();
        G1->raise();
        A1->raise();
        B1->raise();
        C2->raise();
        D2->raise();
        E2->raise();
        F2->raise();
        G2->raise();
        A2->raise();
        B2->raise();
        C3->raise();
        D3->raise();
        E3->raise();
        F3->raise();
        G3->raise();
        A3->raise();
        B3->raise();
        C4->raise();
        D4->raise();
        E4->raise();
        F4->raise();
        G4->raise();
        A4->raise();
        B4->raise();
        C5->raise();
        D5->raise();
        E5->raise();
        F5->raise();
        G5->raise();
        A5->raise();
        B5->raise();
        C6->raise();
        D6->raise();
        E6->raise();
        F6->raise();
        G6->raise();
        A6->raise();
        B6->raise();
        C7->raise();
        D7->raise();
        E7->raise();
        F7->raise();
        G7->raise();
        A7->raise();
        B7->raise();
        C8->raise();
        A0s->raise();
        A1s->raise();
        A2s->raise();
        A3s->raise();
        A4s->raise();
        A5s->raise();
        A6s->raise();
        A7s->raise();
        C2s->raise();
        C3s->raise();
        C4s->raise();
        C5s->raise();
        C6s->raise();
        C7s->raise();
        D1s->raise();
        D2s->raise();
        D3s->raise();
        D4s->raise();
        D5s->raise();
        D6s->raise();
        D7s->raise();
        F1s->raise();
        F2s->raise();
        F3s->raise();
        F4s->raise();
        F5s->raise();
        F6s->raise();
        F7s->raise();
        G1s->raise();
        G2s->raise();
        G3s->raise();
        G4s->raise();
        G5s->raise();
        G6s->raise();
        G7s->raise();
        C1s->raise();

        horizontalLayout_3->addWidget(groupBox);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 10, 431, 21));
        MainWindow->setCentralWidget(centralwidget);
        textBrowser->raise();
        pushButton->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        gridLayoutWidget->raise();
        label_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1582, 26));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        labelTime->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        labelTotal->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        pushButtonPlay->setText(QString());
        pushButtonPause->setText(QString());
        pushButtonStop->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Speed:", nullptr));
        doubleSpinBoxSpeed->setSuffix(QCoreApplication::translate("MainWindow", "x", nullptr));
        groupBox->setTitle(QString());
        G2s->setText(QString());
        F2->setText(QString());
        E7->setText(QString());
        G3s->setText(QString());
        G4s->setText(QString());
        E2->setText(QString());
        C6->setText(QString());
        G5->setText(QString());
        D2->setText(QString());
        A0s->setText(QString());
        G2->setText(QString());
        E1->setText(QString());
        C3->setText(QString());
        A2->setText(QString());
        C8->setText(QString());
        A5s->setText(QString());
        F4->setText(QString());
        E5->setText(QString());
        G1->setText(QString());
        A4s->setText(QString());
        F4s->setText(QString());
        B5->setText(QString());
        B1->setText(QString());
        D5->setText(QString());
        C7->setText(QString());
        A6->setText(QString());
        A3->setText(QString());
        E4->setText(QString());
        F7->setText(QString());
        G5s->setText(QString());
        F3s->setText(QString());
        C2->setText(QString());
        B3->setText(QString());
        E6->setText(QString());
        B2->setText(QString());
        D2s->setText(QString());
        F6s->setText(QString());
        D1s->setText(QString());
        C5s->setText(QString());
        A5->setText(QString());
        C3s->setText(QString());
        G7s->setText(QString());
        F6->setText(QString());
        A3s->setText(QString());
        D5s->setText(QString());
        D3s->setText(QString());
        D6->setText(QString());
        D7->setText(QString());
        A7->setText(QString());
        G6s->setText(QString());
        C7s->setText(QString());
        C6s->setText(QString());
        D3->setText(QString());
        F5s->setText(QString());
        F5->setText(QString());
        B7->setText(QString());
        F7s->setText(QString());
        A6s->setText(QString());
        G4->setText(QString());
        A7s->setText(QString());
        A2s->setText(QString());
        D1->setText(QString());
        B0->setText(QString());
        G3->setText(QString());
        F3->setText(QString());
        C2s->setText(QString());
        B6->setText(QString());
        C1s->setText(QString());
        A1s->setText(QString());
        D7s->setText(QString());
        C1->setText(QString());
        B4->setText(QString());
        F2s->setText(QString());
        A4->setText(QString());
        E3->setText(QString());
        A0->setText(QString());
        C4s->setText(QString());
        C5->setText(QString());
        D6s->setText(QString());
        G7->setText(QString());
        D4s->setText(QString());
        G1s->setText(QString());
        F1->setText(QString());
        C4->setText(QString());
        G6->setText(QString());
        A1->setText(QString());
        D4->setText(QString());
        F1s->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
