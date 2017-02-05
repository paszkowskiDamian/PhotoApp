#ifndef BRIGHTNESS_H
#define BRIGHTNESS_H
#include "filter.h"

class Brightness : public Filter
{
	int multiplayer; 
public:
    Brightness(QPixmap*, int);
	virtual void apply();
};

#endif // BRIGHTNESS_H
