/********************************************************************************
** Form generated from reading UI file 'gui_revised.ui'
**
** Created: Sun Apr 13 16:46:03 2014
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_REVISED_H
#define UI_GUI_REVISED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *cameras;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *gridWidget_4;
    QGridLayout *gridLayout_9;
    QSlider *verticalSlider;
    QLabel *label_2;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSlider *horizontalSlider_2;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QVBoxLayout *controls;
    QLabel *logo;
    QFrame *line_3;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_19;
    QFrame *line_2;
    QGridLayout *camera_thumbnails;
    QLabel *label;
    QLabel *label_12;
    QLabel *label_22;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_18;
    QScrollBar *verticalScrollBar;
    QLabel *label_20;
    QFrame *line;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_17;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QLabel *label_21;
    QFrame *frame_2;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *label_26;
    QLabel *label_25;
    QLabel *label_28;
    QLabel *label_27;
    QSpacerItem *horizontalSpacer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1779, 980);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cameras = new QGridLayout();
        cameras->setObjectName(QString::fromUtf8("cameras"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(1);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(50, 0));
        widget->setMaximumSize(QSize(100, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridWidget_4 = new QWidget(widget);
        gridWidget_4->setObjectName(QString::fromUtf8("gridWidget_4"));
        gridWidget_4->setMinimumSize(QSize(50, 50));
        gridWidget_4->setMaximumSize(QSize(50, 50));
        gridLayout_9 = new QGridLayout(gridWidget_4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setSizeConstraint(QLayout::SetMaximumSize);

        verticalLayout_3->addWidget(gridWidget_4);

        verticalSlider = new QSlider(widget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy2);
        verticalSlider->setMinimumSize(QSize(0, 200));
        verticalSlider->setMaximumSize(QSize(30, 200));
        verticalSlider->setValue(33);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickPosition(QSlider::TicksBothSides);
        verticalSlider->setTickInterval(20);

        verticalLayout_3->addWidget(verticalSlider, 0, Qt::AlignHCenter|Qt::AlignTop);


        horizontalLayout->addWidget(widget);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);


        cameras->addWidget(frame, 0, 0, 1, 1);

        frame_6 = new QFrame(centralwidget);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        sizePolicy1.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy1);
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Sunken);
        horizontalLayout_2 = new QHBoxLayout(frame_6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);


        cameras->addWidget(frame_6, 0, 1, 1, 1);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        pushButton_4 = new QPushButton(frame_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_13->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(frame_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_13->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(frame_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_13->addWidget(pushButton_6);

        horizontalSlider_2 = new QSlider(frame_3);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setValue(33);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(horizontalSlider_2);

        lcdNumber = new QLCDNumber(frame_3);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMaximumSize(QSize(20, 16777215));
        lcdNumber->setFrameShape(QFrame::Panel);
        lcdNumber->setDigitCount(2);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(7));

        horizontalLayout_13->addWidget(lcdNumber);

        lcdNumber_2 = new QLCDNumber(frame_3);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setMaximumSize(QSize(20, 16777215));
        lcdNumber_2->setFrameShape(QFrame::Panel);
        lcdNumber_2->setDigitCount(2);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_2->setProperty("value", QVariant(57));

        horizontalLayout_13->addWidget(lcdNumber_2);


        verticalLayout->addLayout(horizontalLayout_13);


        cameras->addWidget(frame_3, 1, 0, 1, 1);

        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Sunken);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);


        cameras->addWidget(frame_4, 1, 1, 1, 1);


        gridLayout_2->addLayout(cameras, 0, 0, 2, 1);

        controls = new QVBoxLayout();
        controls->setObjectName(QString::fromUtf8("controls"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMaximumSize(QSize(16777215, 40));
        logo->setAlignment(Qt::AlignCenter);
        logo->setMargin(10);

        controls->addWidget(logo);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        controls->addWidget(line_3);

        horizontalWidget_2 = new QWidget(centralwidget);
        horizontalWidget_2->setObjectName(QString::fromUtf8("horizontalWidget_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(horizontalWidget_2->sizePolicy().hasHeightForWidth());
        horizontalWidget_2->setSizePolicy(sizePolicy5);
        horizontalWidget_2->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMaximumSize);
        pushButton_2 = new QPushButton(horizontalWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(70, 40));

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(70, 40));

        horizontalLayout_5->addWidget(pushButton);

        label_19 = new QLabel(horizontalWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMaximumSize(QSize(70, 40));

        horizontalLayout_5->addWidget(label_19);


        controls->addWidget(horizontalWidget_2);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Sunken);
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::HLine);

        controls->addWidget(line_2);

        camera_thumbnails = new QGridLayout();
        camera_thumbnails->setObjectName(QString::fromUtf8("camera_thumbnails"));
        camera_thumbnails->setHorizontalSpacing(6);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(9);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(2);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setWordWrap(false);

        camera_thumbnails->addWidget(label, 0, 0, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setFrameShape(QFrame::Box);
        label_12->setFrameShadow(QFrame::Plain);
        label_12->setLineWidth(2);
        label_12->setTextFormat(Qt::AutoText);
        label_12->setScaledContents(false);
        label_12->setWordWrap(false);

        camera_thumbnails->addWidget(label_12, 2, 1, 1, 1);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font);
        label_22->setFrameShape(QFrame::Box);
        label_22->setLineWidth(2);

        camera_thumbnails->addWidget(label_22, 5, 0, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setFrameShape(QFrame::Box);
        label_10->setFrameShadow(QFrame::Plain);
        label_10->setLineWidth(2);
        label_10->setTextFormat(Qt::AutoText);
        label_10->setScaledContents(false);
        label_10->setWordWrap(false);

        camera_thumbnails->addWidget(label_10, 1, 2, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setFrameShape(QFrame::Box);
        label_13->setFrameShadow(QFrame::Plain);
        label_13->setLineWidth(2);
        label_13->setTextFormat(Qt::AutoText);
        label_13->setScaledContents(false);
        label_13->setWordWrap(false);

        camera_thumbnails->addWidget(label_13, 2, 2, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);
        label_16->setFrameShape(QFrame::Box);
        label_16->setFrameShadow(QFrame::Plain);
        label_16->setLineWidth(2);
        label_16->setTextFormat(Qt::AutoText);
        label_16->setScaledContents(false);
        label_16->setWordWrap(false);

        camera_thumbnails->addWidget(label_16, 3, 2, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);
        label_14->setFrameShape(QFrame::Box);
        label_14->setFrameShadow(QFrame::Plain);
        label_14->setLineWidth(2);
        label_14->setTextFormat(Qt::AutoText);
        label_14->setScaledContents(false);
        label_14->setWordWrap(false);

        camera_thumbnails->addWidget(label_14, 3, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setFrameShape(QFrame::Box);
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setLineWidth(2);
        label_7->setTextFormat(Qt::AutoText);
        label_7->setScaledContents(false);
        label_7->setWordWrap(false);

        camera_thumbnails->addWidget(label_7, 0, 2, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setFrameShape(QFrame::Box);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setLineWidth(2);
        label_6->setTextFormat(Qt::AutoText);
        label_6->setScaledContents(false);
        label_6->setWordWrap(false);

        camera_thumbnails->addWidget(label_6, 0, 1, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setFrameShape(QFrame::Box);
        label_9->setFrameShadow(QFrame::Plain);
        label_9->setLineWidth(2);
        label_9->setTextFormat(Qt::AutoText);
        label_9->setScaledContents(false);
        label_9->setWordWrap(false);

        camera_thumbnails->addWidget(label_9, 1, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setFrameShape(QFrame::Box);
        label_8->setFrameShadow(QFrame::Plain);
        label_8->setLineWidth(2);
        label_8->setTextFormat(Qt::AutoText);
        label_8->setScaledContents(false);
        label_8->setWordWrap(false);

        camera_thumbnails->addWidget(label_8, 1, 0, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setFrameShape(QFrame::Box);
        label_11->setFrameShadow(QFrame::Plain);
        label_11->setLineWidth(2);
        label_11->setTextFormat(Qt::AutoText);
        label_11->setScaledContents(false);
        label_11->setWordWrap(false);

        camera_thumbnails->addWidget(label_11, 2, 0, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);
        label_15->setFrameShape(QFrame::Box);
        label_15->setFrameShadow(QFrame::Plain);
        label_15->setLineWidth(2);
        label_15->setTextFormat(Qt::AutoText);
        label_15->setScaledContents(false);
        label_15->setWordWrap(false);

        camera_thumbnails->addWidget(label_15, 3, 1, 1, 1);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);
        label_17->setFrameShape(QFrame::Box);
        label_17->setFrameShadow(QFrame::Plain);
        label_17->setLineWidth(2);
        label_17->setTextFormat(Qt::AutoText);
        label_17->setScaledContents(false);
        label_17->setWordWrap(false);

        camera_thumbnails->addWidget(label_17, 4, 0, 1, 1);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);
        label_23->setFrameShape(QFrame::Box);
        label_23->setLineWidth(2);

        camera_thumbnails->addWidget(label_23, 5, 1, 1, 1);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font);
        label_24->setFrameShape(QFrame::Box);
        label_24->setLineWidth(2);

        camera_thumbnails->addWidget(label_24, 5, 2, 1, 1);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);
        label_18->setFrameShape(QFrame::Box);
        label_18->setFrameShadow(QFrame::Plain);
        label_18->setLineWidth(2);
        label_18->setTextFormat(Qt::AutoText);
        label_18->setScaledContents(false);
        label_18->setWordWrap(false);

        camera_thumbnails->addWidget(label_18, 4, 1, 1, 1);

        verticalScrollBar = new QScrollBar(centralwidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setMaximum(5);
        verticalScrollBar->setOrientation(Qt::Vertical);

        camera_thumbnails->addWidget(verticalScrollBar, 0, 3, 6, 1);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);
        label_20->setFrameShape(QFrame::Box);
        label_20->setFrameShadow(QFrame::Plain);
        label_20->setLineWidth(2);
        label_20->setTextFormat(Qt::AutoText);
        label_20->setScaledContents(false);
        label_20->setWordWrap(false);

        camera_thumbnails->addWidget(label_20, 4, 2, 1, 1);


        controls->addLayout(camera_thumbnails);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        controls->addWidget(line);

        horizontalWidget = new QWidget(centralwidget);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalWidget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_3->setContentsMargins(0, 0, -1, 1);
        frame_17 = new QFrame(horizontalWidget);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setMaximumSize(QSize(16777215, 50));
        frame_17->setAutoFillBackground(false);
        frame_17->setFrameShape(QFrame::Box);
        frame_17->setFrameShadow(QFrame::Sunken);
        frame_17->setLineWidth(1);
        gridLayout_8 = new QGridLayout(frame_17);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(2, 2, 2, 2);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_21 = new QLabel(frame_17);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFrameShape(QFrame::Box);

        gridLayout_7->addWidget(label_21, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(frame_17);

        frame_2 = new QFrame(horizontalWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMaximumSize(QSize(16777215, 50));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        gridLayout_6 = new QGridLayout(frame_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(1, 2, 2, 1);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_26 = new QLabel(frame_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(label_26, 0, 1, 1, 1);

        label_25 = new QLabel(frame_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(label_25, 0, 0, 1, 1);

        label_28 = new QLabel(frame_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(label_28, 1, 1, 1, 1);

        label_27 = new QLabel(frame_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(label_27, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(frame_2);

        horizontalSpacer = new QSpacerItem(130, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        controls->addWidget(horizontalWidget);


        gridLayout_2->addLayout(controls, 0, 1, 2, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Surveillance App", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "camera 1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "camera 2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "camera 3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "<<", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", ">", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", ">>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "camera 4", 0, QApplication::UnicodeUTF8));
        logo->setText(QApplication::translate("MainWindow", "LOGO Surveillance App", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "LIVE", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Calendar", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "18, March", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_21->setText(QString());
        label_26->setText(QString());
        label_25->setText(QString());
        label_28->setText(QString());
        label_27->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_REVISED_H
