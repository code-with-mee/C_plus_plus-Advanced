#include "Department.h"

Department::Department(string name)
{
	this->name = name;
}

void Department::Display()
{
	cout << "department : " << name << endl;
}
