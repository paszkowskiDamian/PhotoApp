#include "hue.h"

Hue::Hue(QPixmap* img)
	: Filter(img, "hue", 100)
{

}

QImage Hue::pipe(QImage inImage)
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
			pixel = pixel.toHsl();
			int hue = pixel.hslHue() + getParameter();
			if(hue > 360 )
			{
				hue -= 360;
			}
			pixel.setHsl(hue, pixel.hslSaturation(), pixel.lightness());
			temp.setPixelColor(x, y, pixel);
		}
	}
	return temp;
}

Hue::~Hue()
{

}
