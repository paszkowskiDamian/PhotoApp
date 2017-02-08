#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "filter.h"
#include "brightness.h"
#include "tooldockwidget.h"
#include "QSlider"
#include <QImage>
#include <QPixmap>
#include "QPushButton"
#include "QLabel"
#include "QHBoxLayout"
#include "QVBoxLayout"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    preview = new ImagePreview(this);
    ui->setupUi(this);
    ui->menuEdit->setEnabled(false);
    ui->actionSave->setEnabled(false);
    ui->actionSave_as->setEnabled(false);
	hideAllControlls();
}

MainWindow::~MainWindow()
{
	clearFilters();
    delete ui;
}

void MainWindow::applyFilter(QString filterName)
{
	Filter* filter = findFilter(filterName);
	filter->apply();
}

void MainWindow::clearFilters()
{
	hideAllControlls();
	for (auto filter : _filters)
	{
		delete filter;
	}
	_filters.resize(0);
}

void MainWindow::hideBrightness()
{
	ui->brightness_label->hide();
	ui->brightness_slider->hide();
	ui->brightness_slider->setValue(100);
	ui->brightness_discard->hide();
	ui->brightness_apply->hide();
}

void MainWindow::hideContrast()
{
	ui->contrast_label->hide();
	ui->contrast_slider->hide();
	ui->contrast_discard->hide();
	ui->contrast_apply->hide();
}

void MainWindow::hideHue()
{
	ui->hue_label->hide();
	ui->hue_slider->hide();
	ui->hue_discard->hide();
	ui->hue_apply->hide();
}

void MainWindow::hideSaturation()
{
	ui->saturation_label->hide();
	ui->saturation_slider->hide();
	ui->saturation_discard->hide();
	ui->saturation_apply->hide();
}

void MainWindow::hideAllControlls()
{
	hideBrightness();
	hideContrast();
	hideHue();
	hideSaturation();
	ui->apply_button->hide();
	ui->all_discard->hide();
}

void MainWindow::on_actionOpen_triggered()
{
    QString dir = QFileDialog::getOpenFileName(this,tr("Open File"),"C://",tr("Image Files(*.jpg *.bmp *.png)"));
	if(image != nullptr)
	{
		clearFilters();
		hideAllControlls();
		delete image;
	}
    image = new ImageModel(dir);
    if(image->openImage())
    {
        ui->statusBar->showMessage("Opening file: " + dir,2000);
        ui->menuEdit->setEnabled(true);
        ui->actionSave->setEnabled(true);
        ui->actionSave_as->setEnabled(true);
		
        preview->setImage(image->getQPixmap());
        preview->show();
    }
}

void MainWindow::on_actionSave_triggered()
{
    QString savePath = image->getDir();
    image->getQPixmap().toImage().save(savePath);
}

void MainWindow::on_actionSave_as_triggered()
{
    QString savePath = QFileDialog::getSaveFileName(this,tr("Save File"),"C://",tr("JPEG(*.jpg *.jpeg) ;; PNG(*.png)"));
    image->getQPixmap().toImage().save(savePath);
}

void MainWindow::on_actionBrightness_triggered()
{
	ui->brightness_label->show();
	ui->brightness_slider->show();
	ui->brightness_discard->show();
	ui->brightness_apply->show();
	ui->apply_button->show();
	ui->all_discard->show();

	_filters.push_back(new Brightness(image));
}

void MainWindow::on_actionContrast_triggered()
{
	ui->contrast_label->show();
	ui->contrast_slider->show();
	ui->contrast_discard->show();
	ui->contrast_apply->show();
	ui->apply_button->show();
	ui->all_discard->show();
}

void MainWindow::on_actionHue_triggered()
{
	ui->hue_label->show();
	ui->hue_slider->show();
	ui->hue_discard->show();
	ui->hue_apply->show();
	ui->apply_button->show();
	ui->all_discard->show();
}

void MainWindow::on_actionSaturation_triggered()
{
	ui->saturation_label->show();
	ui->saturation_slider->show();
	ui->saturation_discard->show();
	ui->saturation_apply->show();
	ui->apply_button->show();
	ui->all_discard->show();
}

void MainWindow::on_brightness_slider_valueChanged()
{

	try
	{
		auto bright = findFilter("brightness");
		auto val = ui->brightness_slider->value();
		QPixmap pixmap;
		pixmap.convertFromImage(bright->change(val));
		preview->setImage(pixmap);

	}catch(std::string msg)
	{
		QString Qmsg;
		Qmsg.fromStdString(msg);
		ui->statusBar->showMessage(Qmsg);
	}

	ui->statusBar->showMessage("changed", 2000);
}

void MainWindow::on_brightness_apply_clicked()
{
	try
	{
		applyFilter("brightness");
		hideBrightness();
	}catch(...)
	{
		
	}
	
}

void MainWindow::on_brightness_discard_clicked()
{
	
	hideBrightness();
}

void MainWindow::on_contrast_slider_valueChanged()
{
}

void MainWindow::on_contrast_apply_clicked()
{
	try
	{
		applyFilter("contrast");
	}
	catch (...)
	{

	}
}

void MainWindow::on_contrast_discard_clicked()
{
}

void MainWindow::on_hue_apply_clicked()
{
	try
	{
		applyFilter("hue");
	}
	catch (...)
	{

	}
}

void MainWindow::on_saturation_apply_clicked()
{
	try
	{
		applyFilter("saturation");
	}
	catch (...)
	{

	}
}

void MainWindow::on_all_apply_clicked()
{
	for (auto filter : _filters)
	{
		filter->apply();
	}
}

Filter* MainWindow::findFilter(QString name)
{
	for (auto filter : _filters)
	{
		if(filter->getName() == name)
		{
			return filter;
		}
	}
	throw "NAPISZ EXCEPTIONA!";
}
