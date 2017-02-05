#ifndef FILTER_H
#define FILTER_H
#include <QPixmap>

class Filter
{
	QPixmap* _filteredPixels;
protected:
	QPixmap* getPixMap();
	void setPixMap(QImage);
public:
    Filter(QPixmap*);
    virtual void apply() = 0;
	virtual ~Filter();
};

#endif // FILTER_H
