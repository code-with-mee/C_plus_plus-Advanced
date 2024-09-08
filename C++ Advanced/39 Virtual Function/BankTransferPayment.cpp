#include "BankTransferPayment.h"

BankTransferPayment::BankTransferPayment(string name)
{
	this->name = name;
}

void BankTransferPayment::ProcessPayment()
{
	Payment::ProcessPayment();
}

void BankTransferPayment::Print()
{
	cout << "bank transfer" << endl;
}
