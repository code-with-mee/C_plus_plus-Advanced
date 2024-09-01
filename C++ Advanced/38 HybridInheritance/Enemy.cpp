#include "Enemy.h"

Enemy::Enemy(string name)
{
	this->name = name;
}

void Enemy::Attack()
{
	cout << name << " attack" << endl;
}
