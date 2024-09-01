#include "Manager.h"

Manager::Manager(int id, string name, int teamSize)
{
	this->id = id;
	this->name = name;
	this->teamSize = teamSize;
}

void Manager::Display()
{
	Employee::Display();
	cout << "Teamsize : " << teamSize << endl;
}
