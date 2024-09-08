#pragma once
#include <iostream>

using namespace std;

namespace PaymentSystem
{
	namespace OnlinePayment
	{
		void ProcessPayment(double amount);
	}

	namespace CashPayment
	{
		void ProcessPayment(double amount);
	}
};

