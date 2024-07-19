#include "Box.h"

Box::Box(int size)
{
	this->size = size;
}

Box& Box::operator+=(const Box& box)
{
	this->size += box.size;
	return *this;
}

Box& Box::operator-=(const Box& box)
{
	this->size -= box.size;
	return *this;
}

int Box::GetSize()
{
	return this->size;
}
