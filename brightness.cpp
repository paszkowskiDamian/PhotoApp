#include "brightness.h"

Brightness::Brightness(QPixmap* img) 
	: Filter(img,"brightness",100)
{
		
}

QImage Brightness::pipe(QImage inImage)
{
	QImage temp = inImage;
	int width = temp.width();
	int height = temp.height();
	QColor pixel;

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			pixel = temp.pixelColor(x, y);
			temp.setPixelColor(x, y, pixel.lighter(getParameter()));
		}
	}
	return temp;
}

Brightness::~Brightness()
{
}

//int width = temp.width();
//int height = temp.height();
//QRgb pixel = temp.pixel(0, 0);
//QColor pixelColor = temp.pixelColor(15, 15);
//int colorGreen = pixelColor.green();
//int green = qGreen(pixel);
//QColor red = QColor(255, 0, 0);
