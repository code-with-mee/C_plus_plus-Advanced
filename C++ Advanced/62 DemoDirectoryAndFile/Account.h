#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

class Account
{
public:
	string accountNumber;
	string accountHolder;
	double balance;

	Account() = default;
	Account(string accountNumber, string accountHolder, double balance)
	{
		this->accountNumber = accountNumber;
		this->accountHolder = accountHolder;
		this->balance = balance;
	}
	virtual void Display()
	{
		cout << "account-number : " << accountNumber
			<< " account-name : " << accountHolder
			<< " balance : " << balance << endl;
	}
    virtual void Deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    virtual void Withdraw(double amount)
    {
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            cout << "Withdrew $" << amount << endl;
        }
        else
        {
            cout << "Invalid or insufficient balance for withdrawal!" << endl;
        }
    }

    json ToJson() const
    {
        return json{ {"accountNumber", accountNumber}, {"accountHolder", accountHolder}, {"balance", balance} };
    }

    void FromJson(const json& j)
    {
        accountNumber = j["accountNumber"];
        accountHolder = j["accountHolder"];
        balance = j["balance"];
    }
};

