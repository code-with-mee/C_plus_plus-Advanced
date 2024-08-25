#include "Point.h"

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::Display()
{
	cout << "x : " << x
		<< " Y : " << y << endl;
}
