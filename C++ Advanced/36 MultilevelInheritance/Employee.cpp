#include "Employee.h"

Employee::Employee(int id, string name)
{
	this->id = id;
	this->name = name;
}

void Employee::Display()
{
	cout << "Id : " << id
		<< " Name : " << name << endl;
}
