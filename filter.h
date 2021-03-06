#ifndef FILTER_H
#define FILTER_H
#include <QPixmap>
#include <string>

class Filter
{
	QPixmap* _filteredPixels;
	QString _filterName;
	int _parameter;

protected:
	QPixmap* getPixMap();
	QImage getTempImage();
	void setPixMap(QImage);
	public:
    Filter(QPixmap*,QString,int);
	QString	getName();
	void setParam(int);
	int getParameter();

	
	virtual QImage pipe(QImage) = 0;
	virtual ~Filter();
	void apply();
};

#endif // FILTER_H
