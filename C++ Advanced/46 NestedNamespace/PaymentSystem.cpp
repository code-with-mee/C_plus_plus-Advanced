#include "PaymentSystem.h"

void PaymentSystem::OnlinePayment::ProcessPayment(double amount)
{
	cout << "online payment : " << amount << endl;
}

void PaymentSystem::CashPayment::ProcessPayment(double amount)
{
	cout << "cash payment : " << amount << endl;
}
