#pragma once
#include <iostream>

using namespace std;

class IPrinter
{
public:
	virtual void TurnOn()=0;
	virtual void Print()=0;
	virtual void TurnOff()=0;
};

