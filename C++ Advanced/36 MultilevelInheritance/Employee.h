#pragma once
#include <iostream>

using namespace std;

class Employee
{
public:
	int id;
	string name;
	Employee() = default;
	Employee(int id, string name);
	void Display();
};

