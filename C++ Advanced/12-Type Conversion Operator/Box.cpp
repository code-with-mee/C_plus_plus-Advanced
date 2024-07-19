#include "Box.h"

Box::Box(int size)
{
	this->size = size;
}

Box::operator int()
{
	return this->size;
}
