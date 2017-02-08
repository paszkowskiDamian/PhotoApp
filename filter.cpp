#include "filter.h"

QPixmap* Filter::getPixMap()
{
	return _filteredPixels;
}

QImage Filter::getTempImage()
{
	return _filteredPixels->toImage().copy();
}

void Filter::setPixMap(QImage img)
{
	_filteredPixels->fromImage(img);
}

void Filter::setParam(int param)
{
	_parameter = param;
}

Filter::Filter(QPixmap* img,QString filterName,int param) : _filteredPixels(img), _filterName(filterName), _parameter(param)
{

}

QString Filter::getName()
{
	return _filterName;
}

Filter::~Filter()
{
}

void Filter::apply()
{
	_filteredPixels->fromImage(change(_parameter));
}
