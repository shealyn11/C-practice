#include "Master.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//怪物攻击伤害
int MasterAttack() {
	int damage = rand() % 10 + 1;
	return damage;
}


////定义怪物技能
//void MasterAcctions() {
//
//}
