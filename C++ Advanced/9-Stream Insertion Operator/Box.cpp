#include "Box.h"

using namespace std;

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

ostream& operator<<(ostream& stream, Box& box)
{
	stream << box.GetSize() << endl;
	return stream;
}
