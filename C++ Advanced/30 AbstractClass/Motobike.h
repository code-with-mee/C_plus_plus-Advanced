#pragma once
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Motobike : Vehicle
{
public:
	Motobike() = default;
	Motobike(string name);
	virtual void StartEngine();
	virtual void StopEngine();
};

