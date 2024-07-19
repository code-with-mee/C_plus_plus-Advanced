#include "Array.h"

Array::Array(size_t size)
{
	values = new int[size];
	this->size = size;
}

Array::~Array()
{
	delete[] values;
}

int& Array::operator[](size_t index)
{
	return values[index];
}
