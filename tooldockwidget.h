#ifndef TOOLDOCKWIDGET_H
#define TOOLDOCKWIDGET_H

#include <QDockWidget>
#include "ui_tooldockwidget.h"

class ToolDockWidget : public QDockWidget
{
	Q_OBJECT
		QString _toolName;
public:
	ToolDockWidget(QString, QWidget *parent = 0);
	~ToolDockWidget();

private:
	Ui::ToolDockWidget ui;
};

#endif // TOOLDOCKWIDGET_H
