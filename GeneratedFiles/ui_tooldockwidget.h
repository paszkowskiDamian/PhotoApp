/********************************************************************************
** Form generated from reading UI file 'tooldockwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLDOCKWIDGET_H
#define UI_TOOLDOCKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolDockWidget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *toolName;
    QSlider *toolSlider;
    QPushButton *applyFilter;

    void setupUi(QDockWidget *ToolDockWidget)
    {
        if (ToolDockWidget->objectName().isEmpty())
            ToolDockWidget->setObjectName(QStringLiteral("ToolDockWidget"));
        ToolDockWidget->resize(1129, 138);
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolName = new QLabel(widget);
        toolName->setObjectName(QStringLiteral("toolName"));
        toolName->setEnabled(true);

        horizontalLayout->addWidget(toolName);

        toolSlider = new QSlider(widget);
        toolSlider->setObjectName(QStringLiteral("toolSlider"));
        toolSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(toolSlider);

        applyFilter = new QPushButton(widget);
        applyFilter->setObjectName(QStringLiteral("applyFilter"));

        horizontalLayout->addWidget(applyFilter);


        horizontalLayout_2->addLayout(horizontalLayout);

        ToolDockWidget->setWidget(widget);

        retranslateUi(ToolDockWidget);

        QMetaObject::connectSlotsByName(ToolDockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ToolDockWidget)
    {
        ToolDockWidget->setWindowTitle(QApplication::translate("ToolDockWidget", "ToolDockWidget", 0));
        toolName->setText(QApplication::translate("ToolDockWidget", "TextLabel", 0));
        applyFilter->setText(QApplication::translate("ToolDockWidget", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class ToolDockWidget: public Ui_ToolDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLDOCKWIDGET_H
