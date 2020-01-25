#include "color_space.h"


ColorSpace::ColorSpace(unsigned short width, unsigned short height): BlackImage(width, height)
{

}

ColorSpace::~ColorSpace()
{
}

void ColorSpace::DrawScene()
{
	for (unsigned short x = 0; x < width; x++)
	{
		for (unsigned short y = 0; y < height; y++)
		{
			SetPixel(x, y, color(
				static_cast<unsigned char>(y * 255 / height),
				static_cast<unsigned char>(x * 255 / width),
				0));
		}
	}

}

void ColorSpace::SetPixel(unsigned short x, unsigned short y, color color)
{
	frame_buffer[y * width + x] = color;
}

