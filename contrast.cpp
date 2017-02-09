#include "contrast.h"

Contrast::Contrast(QPixmap* img)
	: Filter(img, "contrast", 100)
{

}

QImage Contrast::pipe(QImage inImage)
{
	QImage temp = inImage;
	int width = temp.width();
	int height = temp.height();
	QColor pixel;
	int red;
	int green;
	int blue;
	int val = getParameter();
	float factor = (259.0*(val/10 + 255)) / (255.0*(259 - val/10));

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			pixel = temp.pixelColor(x, y);
			red = validate(factor*(pixel.red()-128)+128);
			green = validate(factor*(pixel.green() - 128) + 128);
			blue = validate(factor*(pixel.blue() - 128) + 128);
			pixel.setRgb(red, green, blue);
			temp.setPixelColor(x, y, pixel);
		}
	}
	return temp;
}

Contrast::~Contrast()
{

}

int Contrast::validate(float color)
{
	if(color >= 255)
	{
		color = 254;
	}else if(color < 0)
	{
		color = 0;
	}
	return color;
}
