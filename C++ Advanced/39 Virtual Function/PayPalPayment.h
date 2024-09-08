#pragma once
#include <iostream>
#include "Payment.h"

using namespace std;

class PayPalPayment : public Payment
{
public:
	PayPalPayment() = default;
	PayPalPayment(string name);
	virtual ~PayPalPayment() = default;
	virtual void ProcessPayment();
	virtual void Print();
};

