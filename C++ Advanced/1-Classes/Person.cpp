#include "Person.h"
#include <iostream>

using namespace std;


//default constructor
Person::Person()
{
	this->id = 0;
	this->name = "";
	cout << "call default constructor" << endl;
}
/*
Person::Person(const Person& person)
{
	cout << "copy constructor" << endl;
	this->id = person.id;
	this->name = person.name;
}
*/

//parameter constructor constructor
Person::Person(int id, string name)
{
	cout << "parameter constructor " << endl;
	this->id = id;
	this->name = name;
}

Person::Person(int id)
{
	this->id = id;
}

Person::~Person()
{
	cout << "destructor called" << endl;
}

void Person::SetId(int id)
{
	this->id = id;
}

int Person::GetId() const
{
	return this->id;
}

void Person::SetName(string name)
{
	this->name = name;
}

string Person::GetName() const
{
	return this->name;
}

void Person::Show() const
{
	cout << "Id : " << id 
		 << " Name : " << name << endl;
}
