#pragma once
#include <iostream>
#include "IPrinter.h"

using namespace std;

class LaserJetPrinter : public IPrinter
{
private:
	string name;
public:
	LaserJetPrinter() = default;
	LaserJetPrinter(string name);
	virtual void TurnOn();
	virtual void Print();
	virtual void TurnOff();
};

