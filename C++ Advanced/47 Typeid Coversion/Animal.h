#pragma once
#include <iostream>

using namespace std;

class Animal
{
public:
	string name;
	Animal() = default;
	Animal(string name)
	{
		this->name = name;
	}
	virtual ~Animal() = default;

	void Display()
	{
		cout << name << endl;
	}
};

