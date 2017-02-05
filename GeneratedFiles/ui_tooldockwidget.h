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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolDockWidget
{
public:
    QWidget *widget;

    void setupUi(QDockWidget *ToolDockWidget)
    {
        if (ToolDockWidget->objectName().isEmpty())
            ToolDockWidget->setObjectName(QStringLiteral("ToolDockWidget"));
        ToolDockWidget->resize(400, 300);
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        ToolDockWidget->setWidget(widget);

        retranslateUi(ToolDockWidget);

        QMetaObject::connectSlotsByName(ToolDockWidget);
    } // setupUi

    void retranslateUi(QDockWidget *ToolDockWidget)
    {
        ToolDockWidget->setWindowTitle(QApplication::translate("ToolDockWidget", "ToolDockWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class ToolDockWidget: public Ui_ToolDockWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLDOCKWIDGET_H
