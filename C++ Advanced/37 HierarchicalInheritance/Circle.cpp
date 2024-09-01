#include "Circle.h"

Circle::Circle(int radius)
{
	this->radius = radius;
}

void Circle::Draw()
{
	cout << "draw radius : " << radius << endl;
}

void Circle::Area()
{
	int area = radius * radius;
	cout << "circle area : " << area << endl;
}
