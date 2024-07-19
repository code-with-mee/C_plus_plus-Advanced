#include "Box.h"

Box::Box(int size)
{
	this->size = size;
}

Box Box::operator+(const Box& box)
{
	return Box(size + box.size);
}

Box Box::operator-(const Box& box)
{
	return Box(size - box.size);
}

Box Box::operator*(const Box& box)
{
	return Box(size * box.size);
}

Box Box::operator/(const Box& box)
{
	return Box(size/box.size);
}

int Box::GetSize()
{
	return this->size;
}
