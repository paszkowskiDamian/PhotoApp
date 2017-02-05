#include "filter.h"

QPixmap* Filter::getPixMap()
{
	return _filteredPixels;
}

void Filter::setPixMap(QImage img)
{
	_filteredPixels->fromImage(img);
}


Filter::Filter(QPixmap* img) : _filteredPixels(img)
{
}

Filter::~Filter()
{
}
