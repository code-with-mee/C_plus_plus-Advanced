#include "Dog.h"

Dog::Dog(string name)
{
	this->name = name;
}

void Dog::Bark()
{
	cout << name << " is barking" << endl;
}
