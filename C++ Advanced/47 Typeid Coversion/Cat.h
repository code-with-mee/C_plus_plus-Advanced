#pragma once
#include <iostream>
#include "Animal.h"

using namespace std;

class Cat : public Animal
{
public:
	Cat() = default;
	Cat(string name)
	{
		this->name = name;
	}
};

