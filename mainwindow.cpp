#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    preview = new ImagePreview(this);

    ui->setupUi(this);
    ui->menuEdit->setEnabled(false);
    ui->actionSave->setEnabled(false);
    ui->actionSave_as->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QString dir = QFileDialog::getOpenFileName(this,tr("Open File"),"C://",tr("Image Files(*.jpg *.bmp *.png)"));
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
