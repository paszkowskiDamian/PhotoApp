#include "filter.h"

Filter::Filter(QPixmap* img, QString filterName, int param) : _filteredPixels(img), _filterName(filterName), _parameter(param)
{

}

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

int Filter::getParameter()
{
	return _parameter;
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

	
}
