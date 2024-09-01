#include <iostream>
#include "Enemy.h"
#include "EnemyFly.h"
#include "EnemyRoll.h"
#include "EnemyHybrid.h"

using namespace std;

int main()
{
    Enemy enemy("enemy");
    enemy.Attack();
    cout << "================" << endl;

    EnemyFly enemyFly("enemy-fly");
    enemyFly.Attack();
    enemyFly.Fly();
    cout << "================" << endl;

    EnemyRoll enemyRoll("enemy-roll");
    enemyRoll.Attack();
    enemyRoll.Roll();
    cout << "================" << endl;

    EnemyHybrid enemyHybrid("enemy-hybrid");
    enemyHybrid.Attack();
    enemyHybrid.Fly();
    enemyHybrid.Roll();
    cout << "================" << endl;

    Enemy* enemyPtr = new EnemyHybrid("HyEnemy");
    
    EnemyHybrid* enemyHybridPtr = dynamic_cast<EnemyHybrid*>(enemyPtr);
    if (enemyHybridPtr != nullptr)
    {
        enemyHybridPtr->Attack();
        enemyHybridPtr->Fly();
        enemyHybridPtr->Roll();
    }
}
