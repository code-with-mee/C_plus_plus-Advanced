#include "EpsonPrinter.h"

EpsonPrinter::EpsonPrinter(string name)
{
	this->name = name;
}

void EpsonPrinter::TurnOn()
{
	cout << name << " is turn on" << endl;
}

void EpsonPrinter::Print()
{
	cout << name << " is printing" << endl;
}

void EpsonPrinter::Print(string content)
{
	cout << name << " is printing "<< content << endl;
}

void EpsonPrinter::Print(int number)
{
	cout << name << " is printing number "<<number << endl;
}

void EpsonPrinter::TurnOff()
{
	cout << name << " is turn off" << endl;
}
