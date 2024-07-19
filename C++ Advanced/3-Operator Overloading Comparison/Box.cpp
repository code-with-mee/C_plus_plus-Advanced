#include "Box.h"

Box::Box(int size)
{
	this->size = size;
}

bool Box::operator<(const Box& box)
{
	return this->size < box.size;
}

bool Box::operator>(const Box& box)
{
	return this->size > box.size;
}

bool Box::operator<=(const Box& box)
{
	return this->size <= box.size;
}

bool Box::operator>=(const Box& box)
{
	return this->size >= box.size;
}
