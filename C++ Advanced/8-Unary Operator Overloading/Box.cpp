#include "Box.h"

Box::Box(int size)
{
	this->size = size;
}

Box& Box::operator++()
{
	this->size++;
	return *this;
}

Box Box::operator++(int)
{
	Box box = *this;
	size++;
	return box;
}

int Box::GetSize()
{
	return  this->size;
}
