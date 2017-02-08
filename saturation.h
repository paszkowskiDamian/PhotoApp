#ifndef SATURATION_H
#define SATURATION_H

#include "Filter.h"

class Saturation : public Filter
{
public:
	Saturation(QPixmap*);
	virtual QImage pipe(QImage);
	~Saturation();

private:
	
};

#endif // SATURATION_H
