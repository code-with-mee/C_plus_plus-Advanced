#include "Car.h"

Car::Car(string name)
{
	this->name = name;
}

void Car::StartEngine()
{
	cout << name << " is start engine" << endl;
}

void Car::StopEngine()
{
	cout << name << " is stop engine" << endl;
}
