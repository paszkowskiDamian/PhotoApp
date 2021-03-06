#include "imagepreview.h"

ImagePreview::ImagePreview(QWidget *parent) : QLabel(), parent(parent)
{
    this->setAlignment(Qt::AlignCenter);
}

ImagePreview::~ImagePreview()
{
	close();
}

void ImagePreview::setImage(QPixmap image)
{
    if(image.height() > maxSize)
    {
        image = image.scaledToWidth(maxSize);
    }
    setPixmap(image);
}
