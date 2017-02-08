#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "imagemodel.h"
#include "imagepreview.h"
#include "QImage"
#include "QPixmap"

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

	void applyFilter(QString);
	QImage pipeAllFilters();
	void updataPreview();

	void clearFilters();
	void hideBrightness();
	void hideContrast();
	void hideHue();
	void hideSaturation();
	void hideAllControlls();

    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_as_triggered();


	void on_actionBrightness_triggered();
	void on_actionContrast_triggered();
	void on_actionHue_triggered();
	void on_actionSaturation_triggered();

	void on_brightness_slider_valueChanged();
	void on_brightness_discard_clicked();

	void on_contrast_slider_valueChanged();
	void on_contrast_discard_clicked();

	void on_hue_slider_valueChanged();
	void on_hue_discard_clicked();

	void on_saturation_slider_valueChanged();
	void on_saturation_discard_clicked();

	void on_all_apply_clicked();
	//void on_all_discard_clicked();

private:
    //model
    ImageModel *image;
	std::vector<Filter*> _filters;
	Filter* findFilter(QString);
    //view
    Ui::MainWindow *ui;
    ImagePreview *preview;

};

#endif // MAINWINDOW_H
