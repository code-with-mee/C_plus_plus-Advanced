#pragma once
#include <iostream>
#include "AccountVerifyException.h"
#include "TransactionFailedException.h"

using namespace std;

class Bank
{
public:
	void AccountVerify(bool isValid);
	void ProcessTransaction(bool isComplete);
};

