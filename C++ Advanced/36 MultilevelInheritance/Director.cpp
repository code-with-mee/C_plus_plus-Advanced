#include "Director.h"

Director::Director(int id, string name, int teamSize, int numOfDepartment)
{
	this->id = id;
	this->name = name;
	this->teamSize = teamSize;
	this->numOfDepartment = numOfDepartment;
}

void Director::Display()
{
	Manager::Display();
	cout << "numofdepartment : " << numOfDepartment << endl;
}
