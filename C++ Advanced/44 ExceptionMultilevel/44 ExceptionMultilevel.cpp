#include <iostream>
#include "Bank.h"

using namespace std;

int main()
{
	try
	{
		Bank bank;
		bank.AccountVerify(true);
		bank.ProcessTransaction(true);
		cout << "process complete!" << endl;
	}
	catch (AccountVerifyException& acc)
	{
		cout << acc.what() << endl;
	}
	catch (TransactionFailedException& tran)
	{
		cout << tran.what() << endl;
	}

}
