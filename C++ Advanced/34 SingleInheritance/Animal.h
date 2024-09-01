#pragma once
#include <iostream>

using namespace std;

class Animal
{
public:
	string name;
	Animal() = default;
	Animal(string name);
	void Eat();
};

