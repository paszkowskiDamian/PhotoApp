#include "imagemodel.h"
#include <iostream>
#include <QRgb>
#include <QColor>
#include "QImage"

ImageModel::ImageModel() : QPixmap()
{

}

ImageModel::ImageModel(QString dir) : QPixmap(dir)
{
    _fileName = new QString(dir);
}

bool ImageModel::openImage(){
    return load(*_fileName);
}

bool ImageModel::openImage(QString dir){
    return load(dir);
}

QString ImageModel::getDir(){
    return *_fileName;
}

QPixmap ImageModel::getQPixmap(){
    return copy();
}

ImageModel::~ImageModel()
{
	delete _fileName;
}
