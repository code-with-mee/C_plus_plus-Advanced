#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class Dog : public Animal
{
public:
	Dog() = default;
	Dog(string name);
	void Bark();
};

