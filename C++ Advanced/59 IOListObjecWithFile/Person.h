#pragma once
#include <iostream>

using namespace std;

class Person
{
private:
	string name;
public:
	Person() = default;
	Person(string name)
	{
		this->name = name;
	}
	void Display()
	{
		cout << name << endl;
	}
};

