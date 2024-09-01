#pragma once
#include <iostream>

using namespace std;

class Department
{
private:
	string name;
public:
	Department() = default;
	Department(string name);
	void Display();
};

