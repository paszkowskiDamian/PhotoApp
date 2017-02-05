#ifndef IMAGEMODEL_H
#define IMAGEMODEL_H

#include "QPixmap"
#include "Filter.h"

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

    void transform(Filter*);

	~ImageModel();
};

#endif // IMAGEMODEL_H
