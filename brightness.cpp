#include "brightness.h"

Brightness::Brightness(QPixmap* img, int parameter) : Filter(img) , multiplayer(parameter)
{

}

void Brightness::apply()
{
	QImage temp = getPixMap()->toImage();
	int width = temp.width();
	int height = temp.height();
	QColor pixel;

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			pixel = temp.pixelColor(x, y);
			int green = pixel.green();
			temp.setPixelColor(x, y, pixel.lighter(multiplayer));
		}
	}
	getPixMap()->convertFromImage(temp);
}

//int width = temp.width();
//int height = temp.height();
//QRgb pixel = temp.pixel(0, 0);
//QColor pixelColor = temp.pixelColor(15, 15);
//int colorGreen = pixelColor.green();
//int green = qGreen(pixel);
//QColor red = QColor(255, 0, 0);
