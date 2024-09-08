#include "PayPalPayment.h"

PayPalPayment::PayPalPayment(string name)
{
	this->name = name;
}

void PayPalPayment::ProcessPayment()
{
	Payment::ProcessPayment();
}

void PayPalPayment::Print()
{
	cout << "PayPal Payment" << endl;
}
