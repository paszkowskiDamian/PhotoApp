#ifndef IMAGEPREVIEW_H
#define IMAGEPREVIEW_H

#include <QLabel>
#include <QResizeEvent>
#include <QPixmap>

class ImagePreview : public QLabel
{
    int maxSize = 600;

    QWidget *parent;

public:
    ImagePreview(QWidget* parent);

    void setImage(QPixmap);



    //void resizeEvent(QResizeEvent ev); TODO resizing images
};

#endif // IMAGEPREVIEW_H
