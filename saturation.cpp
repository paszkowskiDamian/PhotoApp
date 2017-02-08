#include "saturation.h"

Saturation::Saturation(QPixmap* img)
	: Filter(img, "saturation", 100)
{

}

QImage Saturation::pipe(QImage inImage)
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
			int saturation = pixel.hslSaturation() + getParameter();
			if (saturation > 255 )
			{
				saturation = 255;
			}
			if(saturation < 0)
			{
				saturation = 0;
			}
			pixel.setHsl(pixel.hue(), saturation, pixel.lightness());
			temp.setPixelColor(x, y, pixel);
		}
	}
	return temp;
}

Saturation::~Saturation()
{

}
