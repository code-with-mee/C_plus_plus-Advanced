#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Person.h"

using namespace std;

class IOFile
{
public:
	void Write()
	{
		vector<Person> persons;
		persons.push_back(Person("roth"));
		persons.push_back(Person("rina"));
		persons.push_back(Person("chantha"));
		persons.push_back(Person("virak"));

		ofstream file;
		file.open("persons.dat", ios::out);
		if (file.is_open())
		{
			for (auto person : persons)
			{
				file.write((char*)&person, sizeof(person));
			}
			file.close();
		}
	}
	void Read()
	{
		ifstream file;
		file.open("persons.dat", ios::out);
		if (file.is_open())
		{
			Person person;

			while (!file.eof())
			{
				file.read(reinterpret_cast<char*>(&person), sizeof(person));
				person.Display();
			}
			file.close();
		}
	}
};

