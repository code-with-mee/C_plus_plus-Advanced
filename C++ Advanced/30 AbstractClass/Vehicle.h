#pragma once
#include <iostream>

using namespace std;

class Vehicle
{
public:
	string name;
	virtual void StartEngine() = 0;
	virtual void StopEngine() = 0;
};

