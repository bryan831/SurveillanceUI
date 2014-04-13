/********************************************************************************
** Form generated from reading UI file 'CS3249_sur_GUI_revisedo28148.ui'
**
** Created: Sun Apr 13 11:17:56 2014
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CS3249_SUR_GUI_REVISEDO28148_H
#define CS3249_SUR_GUI_REVISEDO28148_H

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
#include "karrowbutton.h"

QT_BEGIN_NAMESPACE

class SurveillanceWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *cameras;
    QFrame *cameraFrame_1;
    QHBoxLayout *horizontalLayout;
    QWidget *liveControls_1;
    QVBoxLayout *verticalLayout_3;
    QWidget *gridWidget_4;
    QGridLayout *gridLayout_9;
    KArrowButton *karrowbutton_5;
    KArrowButton *karrowbutton_4;
    KArrowButton *karrowbutton_6;
    KArrowButton *karrowbutton_7;
    QSlider *verticalSlider;
    QLabel *camLabel_1;
    QFrame *cameraFrame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *camLabel_2;
    QFrame *cameraFrame_3;
    QVBoxLayout *verticalLayout;
    QLabel *camLabel_3;
    QHBoxLayout *playbackControls_3;
    QPushButton *playbackRewindButton_3;
    QPushButton *playbackPlayButton_3;
    QPushButton *playbackForwardButton_3;
    QSlider *playbackSlider_3;
    QLCDNumber *playbackMinutesNumber_3;
    QLCDNumber *playbackSecondsNumber_3;
    QFrame *cameraFrame_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *camLabel_4;
    QVBoxLayout *controls;
    QLabel *logo;
    QFrame *line_3;
    QWidget *timeControls;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *liveButton;
    QPushButton *calendarButton;
    QLabel *dateLabel;
    QFrame *line_2;
    QGridLayout *cameraThumbnails;
    QLabel *thumb2;
    QLabel *thumb1;
    QScrollBar *cameraThumbnailsScrollBar;
    QFrame *line;
    QWidget *cameraLayouts;
    QHBoxLayout *horizontalLayout_3;
    QFrame *cameraLayout_1;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QLabel *label_21;
    QFrame *cameraLayout_2;
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
        cameraFrame_1 = new QFrame(centralwidget);
        cameraFrame_1->setObjectName(QString::fromUtf8("cameraFrame_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cameraFrame_1->sizePolicy().hasHeightForWidth());
        cameraFrame_1->setSizePolicy(sizePolicy1);
        cameraFrame_1->setFrameShape(QFrame::Box);
        cameraFrame_1->setFrameShadow(QFrame::Sunken);
        cameraFrame_1->setLineWidth(1);
        horizontalLayout = new QHBoxLayout(cameraFrame_1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        liveControls_1 = new QWidget(cameraFrame_1);
        liveControls_1->setObjectName(QString::fromUtf8("liveControls_1"));
        liveControls_1->setMinimumSize(QSize(50, 0));
        liveControls_1->setMaximumSize(QSize(100, 16777215));
        verticalLayout_3 = new QVBoxLayout(liveControls_1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridWidget_4 = new QWidget(liveControls_1);
        gridWidget_4->setObjectName(QString::fromUtf8("gridWidget_4"));
        gridWidget_4->setMinimumSize(QSize(50, 50));
        gridWidget_4->setMaximumSize(QSize(50, 50));
        gridLayout_9 = new QGridLayout(gridWidget_4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setSizeConstraint(QLayout::SetMaximumSize);
        karrowbutton_5 = new KArrowButton(gridWidget_4);
        karrowbutton_5->setObjectName(QString::fromUtf8("karrowbutton_5"));
        karrowbutton_5->setMinimumSize(QSize(15, 15));
        karrowbutton_5->setIconSize(QSize(40, 40));

        gridLayout_9->addWidget(karrowbutton_5, 0, 1, 1, 1);

        karrowbutton_4 = new KArrowButton(gridWidget_4);
        karrowbutton_4->setObjectName(QString::fromUtf8("karrowbutton_4"));
        karrowbutton_4->setMinimumSize(QSize(15, 15));
        karrowbutton_4->setIconSize(QSize(40, 40));
        karrowbutton_4->setProperty("arrowType", QVariant(3));

        gridLayout_9->addWidget(karrowbutton_4, 1, 0, 1, 1);

        karrowbutton_6 = new KArrowButton(gridWidget_4);
        karrowbutton_6->setObjectName(QString::fromUtf8("karrowbutton_6"));
        karrowbutton_6->setMinimumSize(QSize(15, 15));
        karrowbutton_6->setIconSize(QSize(40, 40));
        karrowbutton_6->setProperty("arrowType", QVariant(2));

        gridLayout_9->addWidget(karrowbutton_6, 2, 1, 1, 1);

        karrowbutton_7 = new KArrowButton(gridWidget_4);
        karrowbutton_7->setObjectName(QString::fromUtf8("karrowbutton_7"));
        karrowbutton_7->setMinimumSize(QSize(15, 15));
        karrowbutton_7->setIconSize(QSize(40, 40));
        karrowbutton_7->setProperty("arrowType", QVariant(4));

        gridLayout_9->addWidget(karrowbutton_7, 1, 2, 1, 1);


        verticalLayout_3->addWidget(gridWidget_4);

        verticalSlider = new QSlider(liveControls_1);
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


        horizontalLayout->addWidget(liveControls_1);

        camLabel_1 = new QLabel(cameraFrame_1);
        camLabel_1->setObjectName(QString::fromUtf8("camLabel_1"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(camLabel_1->sizePolicy().hasHeightForWidth());
        camLabel_1->setSizePolicy(sizePolicy3);
        camLabel_1->setFrameShape(QFrame::NoFrame);
        camLabel_1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(camLabel_1);


        cameras->addWidget(cameraFrame_1, 0, 0, 1, 1);

        cameraFrame_2 = new QFrame(centralwidget);
        cameraFrame_2->setObjectName(QString::fromUtf8("cameraFrame_2"));
        sizePolicy1.setHeightForWidth(cameraFrame_2->sizePolicy().hasHeightForWidth());
        cameraFrame_2->setSizePolicy(sizePolicy1);
        cameraFrame_2->setFrameShape(QFrame::Box);
        cameraFrame_2->setFrameShadow(QFrame::Sunken);
        horizontalLayout_2 = new QHBoxLayout(cameraFrame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        camLabel_2 = new QLabel(cameraFrame_2);
        camLabel_2->setObjectName(QString::fromUtf8("camLabel_2"));
        camLabel_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(camLabel_2);


        cameras->addWidget(cameraFrame_2, 0, 1, 1, 1);

        cameraFrame_3 = new QFrame(centralwidget);
        cameraFrame_3->setObjectName(QString::fromUtf8("cameraFrame_3"));
        sizePolicy1.setHeightForWidth(cameraFrame_3->sizePolicy().hasHeightForWidth());
        cameraFrame_3->setSizePolicy(sizePolicy1);
        cameraFrame_3->setFrameShape(QFrame::Box);
        cameraFrame_3->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(cameraFrame_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        camLabel_3 = new QLabel(cameraFrame_3);
        camLabel_3->setObjectName(QString::fromUtf8("camLabel_3"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(camLabel_3->sizePolicy().hasHeightForWidth());
        camLabel_3->setSizePolicy(sizePolicy4);
        camLabel_3->setFrameShape(QFrame::NoFrame);
        camLabel_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(camLabel_3);

        playbackControls_3 = new QHBoxLayout();
        playbackControls_3->setObjectName(QString::fromUtf8("playbackControls_3"));
        playbackRewindButton_3 = new QPushButton(cameraFrame_3);
        playbackRewindButton_3->setObjectName(QString::fromUtf8("playbackRewindButton_3"));
        playbackRewindButton_3->setMaximumSize(QSize(50, 16777215));

        playbackControls_3->addWidget(playbackRewindButton_3);

        playbackPlayButton_3 = new QPushButton(cameraFrame_3);
        playbackPlayButton_3->setObjectName(QString::fromUtf8("playbackPlayButton_3"));
        playbackPlayButton_3->setMaximumSize(QSize(50, 16777215));

        playbackControls_3->addWidget(playbackPlayButton_3);

        playbackForwardButton_3 = new QPushButton(cameraFrame_3);
        playbackForwardButton_3->setObjectName(QString::fromUtf8("playbackForwardButton_3"));
        playbackForwardButton_3->setMaximumSize(QSize(50, 16777215));

        playbackControls_3->addWidget(playbackForwardButton_3);

        playbackSlider_3 = new QSlider(cameraFrame_3);
        playbackSlider_3->setObjectName(QString::fromUtf8("playbackSlider_3"));
        playbackSlider_3->setValue(33);
        playbackSlider_3->setOrientation(Qt::Horizontal);

        playbackControls_3->addWidget(playbackSlider_3);

        playbackMinutesNumber_3 = new QLCDNumber(cameraFrame_3);
        playbackMinutesNumber_3->setObjectName(QString::fromUtf8("playbackMinutesNumber_3"));
        playbackMinutesNumber_3->setMaximumSize(QSize(20, 16777215));
        playbackMinutesNumber_3->setFrameShape(QFrame::Panel);
        playbackMinutesNumber_3->setNumDigits(2);
        playbackMinutesNumber_3->setSegmentStyle(QLCDNumber::Flat);
        playbackMinutesNumber_3->setProperty("value", QVariant(7));

        playbackControls_3->addWidget(playbackMinutesNumber_3);

        playbackSecondsNumber_3 = new QLCDNumber(cameraFrame_3);
        playbackSecondsNumber_3->setObjectName(QString::fromUtf8("playbackSecondsNumber_3"));
        playbackSecondsNumber_3->setMaximumSize(QSize(20, 16777215));
        playbackSecondsNumber_3->setFrameShape(QFrame::Panel);
        playbackSecondsNumber_3->setNumDigits(2);
        playbackSecondsNumber_3->setSegmentStyle(QLCDNumber::Flat);
        playbackSecondsNumber_3->setProperty("value", QVariant(57));

        playbackControls_3->addWidget(playbackSecondsNumber_3);


        verticalLayout->addLayout(playbackControls_3);


        cameras->addWidget(cameraFrame_3, 1, 0, 1, 1);

        cameraFrame_4 = new QFrame(centralwidget);
        cameraFrame_4->setObjectName(QString::fromUtf8("cameraFrame_4"));
        sizePolicy1.setHeightForWidth(cameraFrame_4->sizePolicy().hasHeightForWidth());
        cameraFrame_4->setSizePolicy(sizePolicy1);
        cameraFrame_4->setFrameShape(QFrame::Box);
        cameraFrame_4->setFrameShadow(QFrame::Sunken);
        horizontalLayout_4 = new QHBoxLayout(cameraFrame_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        camLabel_4 = new QLabel(cameraFrame_4);
        camLabel_4->setObjectName(QString::fromUtf8("camLabel_4"));
        camLabel_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(camLabel_4);


        cameras->addWidget(cameraFrame_4, 1, 1, 1, 1);


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

        timeControls = new QWidget(centralwidget);
        timeControls->setObjectName(QString::fromUtf8("timeControls"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(timeControls->sizePolicy().hasHeightForWidth());
        timeControls->setSizePolicy(sizePolicy5);
        timeControls->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_5 = new QHBoxLayout(timeControls);
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMaximumSize);
        liveButton = new QPushButton(timeControls);
        liveButton->setObjectName(QString::fromUtf8("liveButton"));
        liveButton->setMaximumSize(QSize(70, 40));

        horizontalLayout_5->addWidget(liveButton);

        calendarButton = new QPushButton(timeControls);
        calendarButton->setObjectName(QString::fromUtf8("calendarButton"));
        calendarButton->setMaximumSize(QSize(70, 40));

        horizontalLayout_5->addWidget(calendarButton);

        dateLabel = new QLabel(timeControls);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setMaximumSize(QSize(70, 40));

        horizontalLayout_5->addWidget(dateLabel);


        controls->addWidget(timeControls);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Sunken);
        line_2->setLineWidth(1);
        line_2->setFrameShape(QFrame::HLine);

        controls->addWidget(line_2);

        cameraThumbnails = new QGridLayout();
        cameraThumbnails->setObjectName(QString::fromUtf8("cameraThumbnails"));
        cameraThumbnails->setHorizontalSpacing(6);
        thumb2 = new QLabel(centralwidget);
        thumb2->setObjectName(QString::fromUtf8("thumb2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(9);
        thumb2->setFont(font);
        thumb2->setFrameShape(QFrame::Box);
        thumb2->setFrameShadow(QFrame::Plain);
        thumb2->setLineWidth(2);
        thumb2->setTextFormat(Qt::AutoText);
        thumb2->setScaledContents(false);
        thumb2->setWordWrap(false);

        cameraThumbnails->addWidget(thumb2, 0, 1, 1, 1);

        thumb1 = new QLabel(centralwidget);
        thumb1->setObjectName(QString::fromUtf8("thumb1"));
        thumb1->setFont(font);
        thumb1->setFrameShape(QFrame::Box);
        thumb1->setFrameShadow(QFrame::Plain);
        thumb1->setLineWidth(2);
        thumb1->setTextFormat(Qt::AutoText);
        thumb1->setScaledContents(false);
        thumb1->setWordWrap(false);

        cameraThumbnails->addWidget(thumb1, 0, 0, 1, 1);

        cameraThumbnailsScrollBar = new QScrollBar(centralwidget);
        cameraThumbnailsScrollBar->setObjectName(QString::fromUtf8("cameraThumbnailsScrollBar"));
        cameraThumbnailsScrollBar->setMaximum(5);
        cameraThumbnailsScrollBar->setOrientation(Qt::Vertical);

        cameraThumbnails->addWidget(cameraThumbnailsScrollBar, 0, 2, 2, 1);


        controls->addLayout(cameraThumbnails);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        controls->addWidget(line);

        cameraLayouts = new QWidget(centralwidget);
        cameraLayouts->setObjectName(QString::fromUtf8("cameraLayouts"));
        cameraLayouts->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_3 = new QHBoxLayout(cameraLayouts);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_3->setContentsMargins(0, 0, -1, 1);
        cameraLayout_1 = new QFrame(cameraLayouts);
        cameraLayout_1->setObjectName(QString::fromUtf8("cameraLayout_1"));
        cameraLayout_1->setMaximumSize(QSize(16777215, 50));
        cameraLayout_1->setAutoFillBackground(false);
        cameraLayout_1->setFrameShape(QFrame::Box);
        cameraLayout_1->setFrameShadow(QFrame::Sunken);
        cameraLayout_1->setLineWidth(1);
        gridLayout_8 = new QGridLayout(cameraLayout_1);
        gridLayout_8->setContentsMargins(2, 2, 2, 2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_21 = new QLabel(cameraLayout_1);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFrameShape(QFrame::Box);

        gridLayout_7->addWidget(label_21, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(cameraLayout_1);

        cameraLayout_2 = new QFrame(cameraLayouts);
        cameraLayout_2->setObjectName(QString::fromUtf8("cameraLayout_2"));
        cameraLayout_2->setMaximumSize(QSize(16777215, 50));
        cameraLayout_2->setFrameShape(QFrame::Box);
        cameraLayout_2->setFrameShadow(QFrame::Sunken);
        gridLayout_6 = new QGridLayout(cameraLayout_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(1, 2, 2, 1);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_26 = new QLabel(cameraLayout_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(label_26, 0, 1, 1, 1);

        label_25 = new QLabel(cameraLayout_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(label_25, 0, 0, 1, 1);

        label_28 = new QLabel(cameraLayout_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(label_28, 1, 1, 1, 1);

        label_27 = new QLabel(cameraLayout_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFrameShape(QFrame::Box);

        gridLayout_5->addWidget(label_27, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(cameraLayout_2);

        horizontalSpacer = new QSpacerItem(130, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        controls->addWidget(cameraLayouts);


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
        camLabel_1->setText(QApplication::translate("MainWindow", "camera 1", 0, QApplication::UnicodeUTF8));
        camLabel_2->setText(QApplication::translate("MainWindow", "camera 2", 0, QApplication::UnicodeUTF8));
        camLabel_3->setText(QApplication::translate("MainWindow", "camera 3", 0, QApplication::UnicodeUTF8));
        playbackRewindButton_3->setText(QApplication::translate("MainWindow", "<<", 0, QApplication::UnicodeUTF8));
        playbackPlayButton_3->setText(QApplication::translate("MainWindow", ">", 0, QApplication::UnicodeUTF8));
        playbackForwardButton_3->setText(QApplication::translate("MainWindow", ">>", 0, QApplication::UnicodeUTF8));
        camLabel_4->setText(QApplication::translate("MainWindow", "camera 4", 0, QApplication::UnicodeUTF8));
        logo->setText(QApplication::translate("MainWindow", "LOGO Surveillance App", 0, QApplication::UnicodeUTF8));
        liveButton->setText(QApplication::translate("MainWindow", "LIVE", 0, QApplication::UnicodeUTF8));
        calendarButton->setText(QApplication::translate("MainWindow", "Calendar", 0, QApplication::UnicodeUTF8));
        dateLabel->setText(QApplication::translate("MainWindow", "18, March", 0, QApplication::UnicodeUTF8));
        thumb2->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        thumb1->setText(QApplication::translate("MainWindow", "Thumbnail", 0, QApplication::UnicodeUTF8));
        label_21->setText(QString());
        label_26->setText(QString());
        label_25->setText(QString());
        label_28->setText(QString());
        label_27->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public SurveillanceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CS3249_SUR_GUI_REVISEDO28148_H

