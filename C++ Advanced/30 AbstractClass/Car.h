#pragma once
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car : Vehicle
{
public:
	Car() = default;
	Car(string name);
	virtual void StartEngine();
	virtual void StopEngine();
};

