#include "Bank.h"

void Bank::AccountVerify(bool isValid)
{
	if (!isValid)
		throw AccountVerifyException();
	cout << "account verify sucess!" << endl;
}

void Bank::ProcessTransaction(bool isComplete)
{
	if (!isComplete)
		throw TransactionFailedException();
	cout << "transaction complete!" << endl;
}
