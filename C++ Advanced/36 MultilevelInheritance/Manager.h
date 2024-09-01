#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class Manager : public Employee
{
public:
	int teamSize;
	Manager() = default;
	Manager(int id, string name, int teamSize);
	void Display();
};

