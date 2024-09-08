#include "LaserJetPrinter.h"

LaserJetPrinter::LaserJetPrinter(string name)
{
	this->name = name;
}

void LaserJetPrinter::TurnOn()
{
	cout << name << " is turn on" << endl;
}

void LaserJetPrinter::Print()
{
	cout << name << " is printing" << endl;
}

void LaserJetPrinter::TurnOff()
{
	cout << name << " is turn off" << endl;
}
