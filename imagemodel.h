#ifndef IMAGEMODEL_H
#define IMAGEMODEL_H

#include "QImage"
#include "QPixmap"


class ImageModel : public QPixmap
{
    QString *_fileName;
    //TODO history class;
public:
    ImageModel();
    ImageModel(QString);

    bool openImage();
    bool openImage(QString);

    QPixmap getQPixmap();
    QString getDir();

    void transform();
};

#endif // IMAGEMODEL_H
