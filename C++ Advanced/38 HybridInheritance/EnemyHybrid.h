#pragma once
#include <iostream>
#include "EnemyFly.h"
#include "EnemyRoll.h"

using namespace std;

class EnemyHybrid : public EnemyFly,public EnemyRoll
{
public:
	EnemyHybrid() = default;
	EnemyHybrid(string name);
	virtual void Attack();
	virtual void Fly();
	virtual void Roll();
};

