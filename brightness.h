#ifndef BRIGHTNESS_H
#define BRIGHTNESS_H
#include "filter.h"

class Brightness : public Filter
{
public:
    Brightness(QPixmap*);
	virtual QImage change(int);
};

#endif // BRIGHTNESS_H
