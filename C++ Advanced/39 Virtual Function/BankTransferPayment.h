#pragma once
#include <iostream>
#include "Payment.h"

using namespace std;

class BankTransferPayment : public Payment
{
public:
	BankTransferPayment() = default;
	BankTransferPayment(string name);
	virtual ~BankTransferPayment() = default;
	void ProcessPayment();
	virtual void Print() override;
};

