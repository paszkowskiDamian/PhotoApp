#include "tooldockwidget.h"

ToolDockWidget::ToolDockWidget(QWidget *parent)
	: QDockWidget(parent)
{
	ui.setupUi(this);
}

ToolDockWidget::~ToolDockWidget()
{

}
