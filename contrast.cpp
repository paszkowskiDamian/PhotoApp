#include "contrast.h"

Contrast::Contrast(QPixmap* img)
	: Filter(img, "contrast", 100)
{

}

QImage Contrast::pipe(QImage inImage, int param)
{
	setParam(param);
	QImage temp = inImage;
	int width = temp.width();
	int height = temp.height();
	QColor pixel;

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			pixel = temp.pixelColor(x, y);
			temp.setPixelColor(x, y, pixel.lighter(param));
		}
	}
	return temp;
}

Contrast::~Contrast()
{

}
