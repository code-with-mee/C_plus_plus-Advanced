#include "Student.h"

Student::Student(int id, string name, int age)
{
	this->id = id;
	this->name = name;
	this->age = age;
	this->address = address;
}

void Student::SetAddress(string no, string street, string city)
{
	this->address.no = no;
	this->address.street = street;
	this->address.city = city;
}

void Student::Display()
{
	cout << "Id : " << id
		<< " Name : " << name
		<< " Age : " << age << " ";
	address.Display();
	cout << endl;
}
