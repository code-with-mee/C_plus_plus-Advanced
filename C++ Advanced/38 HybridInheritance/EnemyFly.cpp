#include "EnemyFly.h"

EnemyFly::EnemyFly(string name)
{
	this->name = name;
}

void EnemyFly::Attack()
{
	Enemy::Attack();
}

void EnemyFly::Fly()
{
	cout << name << " fly" << endl;
}
