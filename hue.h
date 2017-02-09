#ifndef HUE_H
#define HUE_H

#include "Filter.h"

class Hue : public Filter
{
public:
	Hue(QPixmap*);
	virtual QImage pipe(QImage);
	~Hue();

private:
	
};

#endif // HUE_H
