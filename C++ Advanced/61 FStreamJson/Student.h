#pragma once
#include <iostream>
#include <string>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

class Student
{
public:
	int id;
	string name;
	int age;
	Student() = default;
	Student(int id, string name, int age)
	{
		this->id = id;
		this->name = name;
		this->age = age;
	}
	void Display()
	{
		cout << "id : " << id
			<< " name : " << name
			<< " age : " << age << endl;
	}

	json ToJson()
	{
		json content = json({{"id",id},{"name",name},{"age",age}});
		return content;
	}
};