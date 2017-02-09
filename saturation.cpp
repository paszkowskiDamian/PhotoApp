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
	int val = getParameter();
	float correction;
	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			pixel = temp.pixelColor(x, y);
			pixel = pixel.toHsl();
			int saturation = pixel.hslSaturation();
			int distance;
			if (val > 0)
			{
				distance = 255 - saturation;
				correction = (val / 100.00)*distance;
				saturation = saturation + correction;
			}else{
				distance = saturation;
				correction = (val / 100.00)*distance;
				saturation = saturation + correction;
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
