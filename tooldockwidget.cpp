#include "tooldockwidget.h"

ToolDockWidget::ToolDockWidget(QString name, QWidget *parent) :  QDockWidget(parent) , _toolName(name)
{
	ui.setupUi(this);
}

ToolDockWidget::~ToolDockWidget()
{
	
}
