#ifndef CONTRAST_H
#define CONTRAST_H

#include "Filter.h"

class Contrast : public Filter
{
public:
	Contrast(QPixmap*);
	virtual QImage pipe(QImage);
	~Contrast();

private:
	int validate(float);
};

#endif // CONTRAST_H
