#include "EnemyRoll.h"

EnemyRoll::EnemyRoll(string name)
{
	this->name = name;
}

void EnemyRoll::Attack()
{
	Enemy::Attack();
}

void EnemyRoll::Roll()
{
	cout << name << " roll" << endl;
}
