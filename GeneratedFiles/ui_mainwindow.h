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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
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
    QGridLayout *gridLayout;
    QSlider *brightness_slider;
    QSpacerItem *verticalSpacer;
    QPushButton *contrast_discard;
    QPushButton *all_discard;
    QSlider *hue_slider;
    QLabel *hue_label;
    QLabel *brightness_label;
    QSlider *contrast_slider;
    QPushButton *hue_discard;
    QLabel *contrast_label;
    QSlider *saturation_slider;
    QPushButton *brightness_discard;
    QLabel *saturation_label;
    QPushButton *saturation_discard;
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
        MainWindow->resize(638, 508);
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
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        brightness_slider = new QSlider(centralWidget);
        brightness_slider->setObjectName(QStringLiteral("brightness_slider"));
        brightness_slider->setMinimum(1);
        brightness_slider->setMaximum(200);
        brightness_slider->setValue(100);
        brightness_slider->setTracking(false);
        brightness_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(brightness_slider, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        contrast_discard = new QPushButton(centralWidget);
        contrast_discard->setObjectName(QStringLiteral("contrast_discard"));

        gridLayout->addWidget(contrast_discard, 2, 2, 1, 1);

        all_discard = new QPushButton(centralWidget);
        all_discard->setObjectName(QStringLiteral("all_discard"));

        gridLayout->addWidget(all_discard, 5, 2, 1, 1);

        hue_slider = new QSlider(centralWidget);
        hue_slider->setObjectName(QStringLiteral("hue_slider"));
        hue_slider->setMinimum(1);
        hue_slider->setMaximum(360);
        hue_slider->setTracking(false);
        hue_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hue_slider, 3, 1, 1, 1);

        hue_label = new QLabel(centralWidget);
        hue_label->setObjectName(QStringLiteral("hue_label"));

        gridLayout->addWidget(hue_label, 3, 0, 1, 1);

        brightness_label = new QLabel(centralWidget);
        brightness_label->setObjectName(QStringLiteral("brightness_label"));

        gridLayout->addWidget(brightness_label, 0, 0, 1, 1);

        contrast_slider = new QSlider(centralWidget);
        contrast_slider->setObjectName(QStringLiteral("contrast_slider"));
        contrast_slider->setTracking(false);
        contrast_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(contrast_slider, 2, 1, 1, 1);

        hue_discard = new QPushButton(centralWidget);
        hue_discard->setObjectName(QStringLiteral("hue_discard"));

        gridLayout->addWidget(hue_discard, 3, 2, 1, 1);

        contrast_label = new QLabel(centralWidget);
        contrast_label->setObjectName(QStringLiteral("contrast_label"));

        gridLayout->addWidget(contrast_label, 2, 0, 1, 1);

        saturation_slider = new QSlider(centralWidget);
        saturation_slider->setObjectName(QStringLiteral("saturation_slider"));
        saturation_slider->setMinimum(-100);
        saturation_slider->setMaximum(100);
        saturation_slider->setValue(0);
        saturation_slider->setTracking(false);
        saturation_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(saturation_slider, 4, 1, 1, 1);

        brightness_discard = new QPushButton(centralWidget);
        brightness_discard->setObjectName(QStringLiteral("brightness_discard"));

        gridLayout->addWidget(brightness_discard, 0, 2, 1, 1);

        saturation_label = new QLabel(centralWidget);
        saturation_label->setObjectName(QStringLiteral("saturation_label"));

        gridLayout->addWidget(saturation_label, 4, 0, 1, 1);

        saturation_discard = new QPushButton(centralWidget);
        saturation_discard->setObjectName(QStringLiteral("saturation_discard"));

        gridLayout->addWidget(saturation_discard, 4, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 638, 21));
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
        contrast_discard->setText(QApplication::translate("MainWindow", "Discard", 0));
        all_discard->setText(QApplication::translate("MainWindow", "Discard all", 0));
        hue_label->setText(QApplication::translate("MainWindow", "Hue", 0));
        brightness_label->setText(QApplication::translate("MainWindow", "Brightness", 0));
        hue_discard->setText(QApplication::translate("MainWindow", "Discard", 0));
        contrast_label->setText(QApplication::translate("MainWindow", "Contrast", 0));
        brightness_discard->setText(QApplication::translate("MainWindow", "Discard", 0));
        saturation_label->setText(QApplication::translate("MainWindow", "Saturation", 0));
        saturation_discard->setText(QApplication::translate("MainWindow", "Discard", 0));
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
