#ifndef IMAGEMODEL_H
#define IMAGEMODEL_H

#include "QPixmap"
#include "Filter.h"

class ImageModel : public QPixmap
{
    QString *_fileName;
    
	

public:
    ImageModel();
    ImageModel(QString);

    bool openImage();
    bool openImage(QString);

    QPixmap getQPixmap();
    QString getDir();

	~ImageModel();
};

#endif // IMAGEMODEL_H
