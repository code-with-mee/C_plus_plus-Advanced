#include "Box.h"

Box::Box(int size)
{
	this->size = size;
}

void Box::SetSize(int size)
{
	this->size = size;
}

int Box::GetSize()
{
	return this->size;
}

istream& operator>>(istream& stream, Box& box)
{
	int value = 0;
	stream >> value;
	box.SetSize(value);
	return stream;
}
