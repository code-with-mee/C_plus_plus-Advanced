#pragma once
#include <iostream>

using namespace std;

namespace FinanceDepartment
{
	class Account
	{
	private:
		string accountNo;
		string accountHolder;
	public:
		Account() = default;
		Account(string acc, string holder);
		void Display();
	};
};

