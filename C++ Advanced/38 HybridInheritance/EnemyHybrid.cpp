#include "EnemyHybrid.h"

EnemyHybrid::EnemyHybrid(string name)
{
	EnemyFly::name = name;
	EnemyRoll::name = name;
}

void EnemyHybrid::Attack()
{
	Enemy::Attack();
}

void EnemyHybrid::Fly()
{
	EnemyFly::Fly();
}

void EnemyHybrid::Roll()
{
	EnemyRoll::Roll();
}
