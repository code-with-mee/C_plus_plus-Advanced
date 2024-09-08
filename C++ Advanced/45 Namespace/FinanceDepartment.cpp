#include "FinanceDepartment.h"

FinanceDepartment::Account::Account(string acc, string holder)
{
	this->accountNo = acc;
	this->accountHolder = holder;
}

void FinanceDepartment::Account::Display()
{
	cout << accountNo << " | " << accountHolder << endl;
}
