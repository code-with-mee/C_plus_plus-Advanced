#pragma once
#include <iostream>
#include "Bank.h"

using namespace std;

class Menu
{
private:
	Bank bank;
public:
	Menu()
	{
		bank.Load();
	}
	void MainMenu()
	{
		cout << "==========MENU=========" << endl;
		cout << "1) Open Account" << endl;
		cout << "2) Close Account" << endl;
		cout << "3) Deposit" << endl;
		cout << "4) Withdraw" << endl;
		cout << "5) Find" << endl;
		cout << "6) Display All" << endl;
		cout << "enter choice : ";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1: OpenAccount(); break;
		case 2: CloseAccount(); break;
		case 3: Withdraw(); break;
		case 4: Deposit(); break;
		case 5: Find(); break;
		case 6: DisplayAll(); break;
		default: MainMenu(); 
			break;
		}
	}

	void OpenAccount()
	{
		string accountNumber;
		string accountHolder;
		double balance;
		cout << "account number : ";
		cin >> accountNumber;
		cout << "account holder : ";
		cin >> accountHolder;
		cout << "init balance : ";
		cin >> balance;
		bank.CreateAccount(accountNumber, accountHolder, balance);
		MainMenu();
	}
	void CloseAccount()
	{
		string accountNumber;
		cout << "account number : ";
		cin >> accountNumber;
		bank.CloseAccount(accountNumber);
		MainMenu();
	}
	void Deposit()
	{
		double balance;
		string accountNumber;
		cout << "account number : ";
		cin >> accountNumber;
		cout << "withdraw amount : ";
		cin >> balance;
		bank.Withdraw(accountNumber, balance);
		MainMenu();
	}
	void Withdraw()
	{
		double balance;
		string accountNumber;
		cout << "account number : ";
		cin >> accountNumber;
		cout << "withdraw amount : ";
		cin >> balance;
		bank.Deposit(accountNumber, balance);
		MainMenu();
	}
	void Find()
	{
		string accountNumber;
		cout << "account number : ";
		cin >> accountNumber;
		bank.DisplayAccount(accountNumber);
		MainMenu();
	}
	void DisplayAll()
	{
		bank.DisplayAll();
		MainMenu();
	}
};

