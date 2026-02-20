/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rbCurrent;
    QRadioButton *rbDate;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_6;
    QLabel *labelSessionCount;
    QLabel *valSessionCount;
    QLabel *iconSessionCount;
    QFrame *frame_2;
    QLabel *labelSessionEff;
    QLabel *valSortingEff;
    QLabel *iconSortingEff;
    QFrame *frame_3;
    QLabel *lableSelectedRecepie;
    QLabel *valSelectedRecepie;
    QLabel *iconSelectedRecepie;
    QFrame *frame_4;
    QLabel *lableObjectOverlap;
    QLabel *label;
    QLabel *iconObjectOveLap;
    QFrame *frame_5;
    QLabel *lableSessionCount_6;
    QLabel *valFiringDirection;
    QLabel *labelSessionValue_11;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_7;
    QFrame *frame_8;
    QFrame *frame_9;
    QLabel *labelSessionTiming;
    QFrame *frame_11;
    QLabel *labelStart;
    QLabel *iconStart;
    QLabel *valStart;
    QFrame *frame_10;
    QLabel *labelEnd;
    QLabel *iconEnd;
    QLabel *valEnd;
    QFrame *frame_12;
    QLabel *labelTotalTime;
    QLabel *valTotalTIme;
    QLabel *iconTotalTime;
    QFrame *frame_13;
    QLabel *labelActualTime;
    QLabel *valActualTime;
    QLabel *iconActualTime;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame_14;
    QFrame *frame_15;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QFrame *frame_16;
    QLabel *label_3;
    QTableWidget *tableWidget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1217, 742);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 1191, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        rbCurrent = new QRadioButton(horizontalLayoutWidget);
        rbCurrent->setObjectName(QString::fromUtf8("rbCurrent"));
        QFont font;
        font.setPointSize(16);
        rbCurrent->setFont(font);

        horizontalLayout_3->addWidget(rbCurrent);

        rbDate = new QRadioButton(horizontalLayoutWidget);
        rbDate->setObjectName(QString::fromUtf8("rbDate"));
        rbDate->setFont(font);

        horizontalLayout_3->addWidget(rbDate);

        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 1181, 101));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(layoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMaximumSize(QSize(16777215, 100));
        frame->setStyleSheet(QString::fromUtf8("frame{\n"
"boreder:0px solid black\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMinimumSize(QSize(0, 70));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        labelSessionCount = new QLabel(frame_6);
        labelSessionCount->setObjectName(QString::fromUtf8("labelSessionCount"));
        labelSessionCount->setGeometry(QRect(10, 10, 131, 17));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelSessionCount->setFont(font1);
        valSessionCount = new QLabel(frame_6);
        valSessionCount->setObjectName(QString::fromUtf8("valSessionCount"));
        valSessionCount->setGeometry(QRect(70, 30, 101, 17));
        iconSessionCount = new QLabel(frame_6);
        iconSessionCount->setObjectName(QString::fromUtf8("iconSessionCount"));
        iconSessionCount->setGeometry(QRect(10, 30, 41, 21));
        iconSessionCount->setFrameShape(QFrame::StyledPanel);

        horizontalLayout->addWidget(frame_6);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        labelSessionEff = new QLabel(frame_2);
        labelSessionEff->setObjectName(QString::fromUtf8("labelSessionEff"));
        labelSessionEff->setGeometry(QRect(10, 10, 131, 17));
        labelSessionEff->setFont(font1);
        valSortingEff = new QLabel(frame_2);
        valSortingEff->setObjectName(QString::fromUtf8("valSortingEff"));
        valSortingEff->setGeometry(QRect(70, 30, 101, 17));
        iconSortingEff = new QLabel(frame_2);
        iconSortingEff->setObjectName(QString::fromUtf8("iconSortingEff"));
        iconSortingEff->setGeometry(QRect(10, 30, 41, 21));
        iconSortingEff->setFrameShape(QFrame::StyledPanel);

        horizontalLayout->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lableSelectedRecepie = new QLabel(frame_3);
        lableSelectedRecepie->setObjectName(QString::fromUtf8("lableSelectedRecepie"));
        lableSelectedRecepie->setGeometry(QRect(10, 10, 131, 17));
        lableSelectedRecepie->setFont(font1);
        valSelectedRecepie = new QLabel(frame_3);
        valSelectedRecepie->setObjectName(QString::fromUtf8("valSelectedRecepie"));
        valSelectedRecepie->setGeometry(QRect(60, 30, 101, 17));
        iconSelectedRecepie = new QLabel(frame_3);
        iconSelectedRecepie->setObjectName(QString::fromUtf8("iconSelectedRecepie"));
        iconSelectedRecepie->setGeometry(QRect(10, 30, 41, 21));
        iconSelectedRecepie->setFrameShape(QFrame::StyledPanel);

        horizontalLayout->addWidget(frame_3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        lableObjectOverlap = new QLabel(frame_4);
        lableObjectOverlap->setObjectName(QString::fromUtf8("lableObjectOverlap"));
        lableObjectOverlap->setGeometry(QRect(10, 10, 111, 17));
        lableObjectOverlap->setFont(font1);
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 91, 20));
        iconObjectOveLap = new QLabel(frame_4);
        iconObjectOveLap->setObjectName(QString::fromUtf8("iconObjectOveLap"));
        iconObjectOveLap->setGeometry(QRect(10, 30, 41, 21));
        iconObjectOveLap->setFrameShape(QFrame::StyledPanel);

        horizontalLayout->addWidget(frame_4);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        lableSessionCount_6 = new QLabel(frame_5);
        lableSessionCount_6->setObjectName(QString::fromUtf8("lableSessionCount_6"));
        lableSessionCount_6->setGeometry(QRect(10, 10, 111, 17));
        lableSessionCount_6->setFont(font1);
        valFiringDirection = new QLabel(frame_5);
        valFiringDirection->setObjectName(QString::fromUtf8("valFiringDirection"));
        valFiringDirection->setGeometry(QRect(70, 30, 81, 20));
        labelSessionValue_11 = new QLabel(frame_5);
        labelSessionValue_11->setObjectName(QString::fromUtf8("labelSessionValue_11"));
        labelSessionValue_11->setGeometry(QRect(10, 30, 41, 21));
        labelSessionValue_11->setFrameShape(QFrame::StyledPanel);

        horizontalLayout->addWidget(frame_5);


        horizontalLayout_2->addWidget(frame);

        horizontalLayoutWidget_2 = new QWidget(widget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 160, 1181, 371));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_7 = new QFrame(horizontalLayoutWidget_2);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(540, 10, 601, 341));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_9 = new QFrame(frame_8);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(20, 10, 501, 21));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        labelSessionTiming = new QLabel(frame_9);
        labelSessionTiming->setObjectName(QString::fromUtf8("labelSessionTiming"));
        labelSessionTiming->setGeometry(QRect(30, 0, 271, 21));
        labelSessionTiming->setFont(font1);
        frame_11 = new QFrame(frame_8);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(20, 60, 501, 61));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        labelStart = new QLabel(frame_11);
        labelStart->setObjectName(QString::fromUtf8("labelStart"));
        labelStart->setGeometry(QRect(20, 10, 81, 17));
        labelStart->setFont(font1);
        iconStart = new QLabel(frame_11);
        iconStart->setObjectName(QString::fromUtf8("iconStart"));
        iconStart->setGeometry(QRect(10, 30, 67, 17));
        QFont font2;
        iconStart->setFont(font2);
        valStart = new QLabel(frame_11);
        valStart->setObjectName(QString::fromUtf8("valStart"));
        valStart->setGeometry(QRect(110, 30, 131, 17));
        frame_10 = new QFrame(frame_8);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(20, 130, 501, 61));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        labelEnd = new QLabel(frame_10);
        labelEnd->setObjectName(QString::fromUtf8("labelEnd"));
        labelEnd->setGeometry(QRect(20, 10, 81, 17));
        labelEnd->setFont(font1);
        iconEnd = new QLabel(frame_10);
        iconEnd->setObjectName(QString::fromUtf8("iconEnd"));
        iconEnd->setGeometry(QRect(20, 30, 67, 17));
        valEnd = new QLabel(frame_10);
        valEnd->setObjectName(QString::fromUtf8("valEnd"));
        valEnd->setGeometry(QRect(100, 30, 91, 17));
        frame_12 = new QFrame(frame_8);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(20, 200, 501, 61));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        labelTotalTime = new QLabel(frame_12);
        labelTotalTime->setObjectName(QString::fromUtf8("labelTotalTime"));
        labelTotalTime->setGeometry(QRect(20, 10, 81, 17));
        labelTotalTime->setFont(font1);
        valTotalTIme = new QLabel(frame_12);
        valTotalTIme->setObjectName(QString::fromUtf8("valTotalTIme"));
        valTotalTIme->setGeometry(QRect(120, 30, 91, 17));
        iconTotalTime = new QLabel(frame_12);
        iconTotalTime->setObjectName(QString::fromUtf8("iconTotalTime"));
        iconTotalTime->setGeometry(QRect(20, 30, 67, 17));
        frame_13 = new QFrame(frame_8);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setGeometry(QRect(20, 270, 501, 61));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        labelActualTime = new QLabel(frame_13);
        labelActualTime->setObjectName(QString::fromUtf8("labelActualTime"));
        labelActualTime->setGeometry(QRect(10, 10, 111, 17));
        labelActualTime->setFont(font1);
        valActualTime = new QLabel(frame_13);
        valActualTime->setObjectName(QString::fromUtf8("valActualTime"));
        valActualTime->setGeometry(QRect(106, 30, 101, 20));
        iconActualTime = new QLabel(frame_13);
        iconActualTime->setObjectName(QString::fromUtf8("iconActualTime"));
        iconActualTime->setGeometry(QRect(10, 30, 67, 17));

        horizontalLayout_4->addWidget(frame_7);

        horizontalLayoutWidget_3 = new QWidget(widget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 540, 1181, 161));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_14 = new QFrame(horizontalLayoutWidget_3);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        frame_15 = new QFrame(frame_14);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setGeometry(QRect(-1, -1, 581, 161));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_15);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 17, 111, 20));
        label_2->setFont(font1);
        tableWidget = new QTableWidget(frame_15);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(5, 41, 571, 211));
        frame_16 = new QFrame(frame_14);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setGeometry(QRect(590, 0, 581, 161));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_16);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 10, 141, 20));
        label_3->setFont(font1);
        tableWidget_2 = new QTableWidget(frame_16);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 41, 561, 181));

        horizontalLayout_6->addWidget(frame_14);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1217, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        rbCurrent->setText(QApplication::translate("MainWindow", "Current Session", nullptr));
        rbDate->setText(QApplication::translate("MainWindow", "Date Range", nullptr));
        labelSessionCount->setText(QApplication::translate("MainWindow", "Session Count", nullptr));
        valSessionCount->setText(QString());
        iconSessionCount->setText(QString());
        labelSessionEff->setText(QApplication::translate("MainWindow", "Sorting Efficiency", nullptr));
        valSortingEff->setText(QString());
        iconSortingEff->setText(QString());
        lableSelectedRecepie->setText(QApplication::translate("MainWindow", "Selected Recepie", nullptr));
        valSelectedRecepie->setText(QString());
        iconSelectedRecepie->setText(QString());
        lableObjectOverlap->setText(QApplication::translate("MainWindow", "Object Overlap", nullptr));
        label->setText(QString());
        iconObjectOveLap->setText(QString());
        lableSessionCount_6->setText(QApplication::translate("MainWindow", "Firing Direction", nullptr));
        valFiringDirection->setText(QString());
        labelSessionValue_11->setText(QString());
        labelSessionTiming->setText(QApplication::translate("MainWindow", "Session Timing Details", nullptr));
        labelStart->setText(QApplication::translate("MainWindow", "Start time", nullptr));
        iconStart->setText(QString());
        valStart->setText(QString());
        labelEnd->setText(QApplication::translate("MainWindow", "End time", nullptr));
        iconEnd->setText(QString());
        valEnd->setText(QString());
        labelTotalTime->setText(QApplication::translate("MainWindow", "Total Time", nullptr));
        valTotalTIme->setText(QString());
        iconTotalTime->setText(QString());
        labelActualTime->setText(QApplication::translate("MainWindow", "Actual TIme", nullptr));
        valActualTime->setText(QString());
        iconActualTime->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Fired Objects", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Non Fired Objects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
