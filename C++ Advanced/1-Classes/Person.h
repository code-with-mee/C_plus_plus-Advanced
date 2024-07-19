#include <iostream>

using namespace std;

#pragma once
class Person
{

public:

	//default constructor
	Person();

	//Person(const Person& person) = delete;

	//parameter constructor
	Person(int id, string name);

	explicit Person(int id);

	~Person();

	//member method (function)
	void SetId(int id);
	int GetId() const;

	void SetName(string name);
	string GetName() const;

	void Show() const;

private:
	//member field
	int id;
	string name;

protected:

};

