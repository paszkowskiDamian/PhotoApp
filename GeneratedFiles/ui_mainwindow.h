/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionTest;
    QAction *actionBrightness;
    QAction *actionContrast;
    QAction *actionSaturation;
    QAction *actionHue;
    QAction *actionCreate_Preset;
    QAction *actionDelete_preset;
    QAction *actionAbout;
    QAction *actionShow_preview;
    QAction *actionResize_preview;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *brighntessSlider;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuWindow;
    QMenu *menuPresets;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(637, 508);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionTest = new QAction(MainWindow);
        actionTest->setObjectName(QStringLiteral("actionTest"));
        actionBrightness = new QAction(MainWindow);
        actionBrightness->setObjectName(QStringLiteral("actionBrightness"));
        actionContrast = new QAction(MainWindow);
        actionContrast->setObjectName(QStringLiteral("actionContrast"));
        actionSaturation = new QAction(MainWindow);
        actionSaturation->setObjectName(QStringLiteral("actionSaturation"));
        actionHue = new QAction(MainWindow);
        actionHue->setObjectName(QStringLiteral("actionHue"));
        actionCreate_Preset = new QAction(MainWindow);
        actionCreate_Preset->setObjectName(QStringLiteral("actionCreate_Preset"));
        actionDelete_preset = new QAction(MainWindow);
        actionDelete_preset->setObjectName(QStringLiteral("actionDelete_preset"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionShow_preview = new QAction(MainWindow);
        actionShow_preview->setObjectName(QStringLiteral("actionShow_preview"));
        actionResize_preview = new QAction(MainWindow);
        actionResize_preview->setObjectName(QStringLiteral("actionResize_preview"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 611, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        brighntessSlider = new QSlider(layoutWidget);
        brighntessSlider->setObjectName(QStringLiteral("brighntessSlider"));
        brighntessSlider->setMaximum(200);
        brighntessSlider->setValue(100);
        brighntessSlider->setSliderPosition(100);
        brighntessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(brighntessSlider);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 637, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menuPresets = new QMenu(menuBar);
        menuPresets->setObjectName(QStringLiteral("menuPresets"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuPresets->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionTest);
        menuEdit->addAction(actionBrightness);
        menuEdit->addAction(actionContrast);
        menuEdit->addAction(actionSaturation);
        menuEdit->addAction(actionHue);
        menuHelp->addAction(actionAbout);
        menuWindow->addAction(actionShow_preview);
        menuWindow->addAction(actionResize_preview);
        menuPresets->addSeparator();
        menuPresets->addAction(actionCreate_Preset);
        menuPresets->addAction(actionDelete_preset);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open...", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save ", 0));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as ...", 0));
        actionTest->setText(QApplication::translate("MainWindow", "Test", 0));
        actionBrightness->setText(QApplication::translate("MainWindow", "Brightness", 0));
        actionContrast->setText(QApplication::translate("MainWindow", "Contrast", 0));
        actionSaturation->setText(QApplication::translate("MainWindow", "Saturation", 0));
        actionHue->setText(QApplication::translate("MainWindow", "Hue", 0));
        actionCreate_Preset->setText(QApplication::translate("MainWindow", "Add preset", 0));
        actionDelete_preset->setText(QApplication::translate("MainWindow", "Delete preset", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About ", 0));
        actionShow_preview->setText(QApplication::translate("MainWindow", "Show preview", 0));
        actionResize_preview->setText(QApplication::translate("MainWindow", "Resize preview", 0));
        label->setText(QApplication::translate("MainWindow", "Brightness", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Apply", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuWindow->setTitle(QApplication::translate("MainWindow", "Window", 0));
        menuPresets->setTitle(QApplication::translate("MainWindow", "Presets", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
