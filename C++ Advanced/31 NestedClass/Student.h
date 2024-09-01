#pragma once
#include <iostream>

using namespace std;

class Student
{
private:
	int id;
	string name;
	int age;

	class Address
	{
	public:
		string no;
		string street;
		string city;

		Address() = default;
		void Display() 
		{
			cout << "No : " << no
				<< " Street : " << street
				<< " City : " << city << endl;
		}
	};

	Address address;

public:
	Student() = default;
	Student(int id, string name, int age);
	void SetAddress(string no, string street, string city);
	void Display();
};

