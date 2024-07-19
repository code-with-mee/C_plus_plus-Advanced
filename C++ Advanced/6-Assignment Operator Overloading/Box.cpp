#include "Box.h"
#include <iostream>

using namespace std;

Box::Box(int size)
{
	this->size = size;
}

/*
Box& Box::operator=(const Box& box)
{
	cout << "assingment operator call" << endl;
	this->size = box.size;
	return *this;
}
*/

