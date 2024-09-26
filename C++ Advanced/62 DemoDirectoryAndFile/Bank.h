#pragma once
#include <iostream>
#include <vector>
#include "Account.h"
#include "FileManager.h"

using namespace std;

class Bank
{
private:
	FileManager fileManager;
public:
	vector<Account> BankAccounts;

	void CreateAccount(string accountNumber, string accountHolder, double initBalance)
	{
		Account* account = Find(accountNumber);
		if (account == nullptr)
		{
			BankAccounts.push_back(Account(accountNumber, accountHolder, initBalance));
			cout << "add account succesful!" << endl;
		}
		Save();
	}

	void CloseAccount(string accountNumber)
	{
		Account* account = Find(accountNumber);
		if (account != nullptr)
		{
			int index = GetIndex(accountNumber);
			auto itor = BankAccounts.begin();
			advance(itor, index);
			BankAccounts.erase(itor);
			cout << "account-number : " << accountNumber
				<< " has been close" << endl;
		}
		Save();
	}

	void Deposit(string accountNumber, double amount)
	{
		Account* account = Find(accountNumber);
		if (account != nullptr)
		{
			account->Deposit(amount);
			cout << "account-number : " << accountNumber
				<< " deposit -> " << amount << endl;
		}
		Save();
	}

	void Withdraw(string accountNumber, double amount)
	{
		Account* account = Find(accountNumber);
		if (account != nullptr)
		{
			account->Deposit(amount);
			cout << "account-number : " << accountNumber
				<< " has been withdraw -> " << amount << endl;
		}
		Save();
	}

	void DisplayAccount(string accountNumber)
	{
		Account* account = Find(accountNumber);
		if (account != nullptr)
			account->Display();
	}

	void DisplayAll()
	{
		for (auto& account : BankAccounts)
		{
			account.Display();
		}
	}

	Account* Find(string accountNumber)
	{
		for (auto& account : BankAccounts)
		{
			if (account.accountNumber == accountNumber)
				return &account;
		}
		return nullptr;
	}

	int GetIndex(string accountNumber)
	{
		int index = 0;
		///*
		for (auto& account : BankAccounts)
		{
			if (account.accountNumber == accountNumber)
				return index;
			index++;
		}
		//*/
	}

	void Save()
	{
		json jsons = json::array();
		for (auto& account : BankAccounts)
		{
			jsons.push_back(account.ToJson());
		}
		fileManager.Save(jsons);
	}

	void Load()
	{
		json jsons = fileManager.Load();
		for (auto& j : jsons)
		{
			Account account;
			account.FromJson(j);
			BankAccounts.push_back(account);
		}
	}
};

