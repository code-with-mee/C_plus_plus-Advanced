#pragma once
#include <iostream>
#include "Enemy.h"

using namespace std;

class EnemyRoll :virtual public Enemy
{
public:
	EnemyRoll() = default;
	EnemyRoll(string name);
	virtual void Attack();
	virtual void Roll();
};

