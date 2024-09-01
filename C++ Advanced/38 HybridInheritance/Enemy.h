#pragma once
#include <iostream>

using namespace std;

class Enemy
{
public:
	string name;
	Enemy() = default;
	Enemy(string name);
	virtual void Attack();
};

