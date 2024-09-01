#include "Rectangle.h"

Rectangle::Rectangle(int width, int height)
{
	this->width = width;
	this->height = height;
}

void Rectangle::Draw()
{
	cout << "rectangle width : " << width
		<< " height : " << height << endl;
}

void Rectangle::Area()
{
	int area = width * height;
	cout << "rectangle area : " << area << endl;
}
