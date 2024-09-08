#pragma once
#include <iostream>

using namespace std;

class Payment
{
public:
	string name;
	Payment() = default;
	Payment(string name);
	virtual ~Payment() = default;
	void ProcessPayment();
	virtual void Print();
};

