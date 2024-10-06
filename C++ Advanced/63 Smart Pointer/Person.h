#pragma once
#include <iostream>

using namespace std;

class Person
{
public:
	int id;
	string name;
	Person() = default;
	Person(int id, string name)
	{
		this->id = id;
		this->name = name;
	}
	void Display()
	{
		cout << "id : " << id
			<< " name : " << name << endl;
	}
};

