#include "Payment.h"

Payment::Payment(string name)
{
	this->name = name;
}

void Payment::ProcessPayment()
{
	cout << name << " is processing..." << endl;
}

void Payment::Print()
{
	cout << "payment " << endl;
}
