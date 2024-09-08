#pragma once
#include <iostream>
#include "IPrinter.h"

using namespace std;

class EpsonPrinter : public IPrinter
{
private:
	string name;
public:
	EpsonPrinter() = default;
	EpsonPrinter(string name);
	virtual void TurnOn();
	virtual void Print();
	virtual void Print(string content);
	virtual void Print(int number);
	virtual void TurnOff();
};

