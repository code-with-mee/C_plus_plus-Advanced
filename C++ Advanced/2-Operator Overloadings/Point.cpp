#include "Point.h"

bool Point::operator==(const Point& point)
{
	return this->x == point.x &&
		this->y == point.y;
}

bool Point::operator!=(const Point& point)
{
	return this->x != point.x ||
		this->y != point.y;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}
