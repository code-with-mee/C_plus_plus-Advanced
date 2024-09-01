#include "Animal.h"

Animal::Animal(string name)
{
	this->name = name;
}

void Animal::Eat()
{
	cout << name << " is eating" << endl;
}
