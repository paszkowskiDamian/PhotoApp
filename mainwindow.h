#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "imagemodel.h"
#include "imagepreview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionTest_triggered();

	void on_brighntessSlider_sliderMoved();

private:
    //model
    ImageModel *image;

    //view
    Ui::MainWindow *ui;
    ImagePreview *preview;

};

#endif // MAINWINDOW_H
