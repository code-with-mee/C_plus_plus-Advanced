#pragma once
#include <iostream>
#include "Enemy.h"

using namespace std;
class EnemyFly :virtual public Enemy
{
public:
	EnemyFly() = default;
	EnemyFly(string name);
	virtual void Attack();
	virtual void Fly();
};

