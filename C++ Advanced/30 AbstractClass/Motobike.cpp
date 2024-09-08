#include "Motobike.h"

Motobike::Motobike(string name)
{
	this->name = name;
}

void Motobike::StartEngine()
{
	cout << name << " is start engine" << endl;
}

void Motobike::StopEngine()
{
	cout << name << " is stop engine" << endl;
}
