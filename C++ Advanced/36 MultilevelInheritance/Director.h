#pragma once
#include <iostream>
#include "Manager.h"

using namespace std;

class Director : public Manager
{
public:
	int numOfDepartment;
	Director() = default;
	Director(int id, string name, int teamSize, int numOfDepartment);
	void Display();
};

