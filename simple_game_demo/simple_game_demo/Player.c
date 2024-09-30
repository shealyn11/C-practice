#include "Player.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//定义玩家行动
void PlayerActions(int Action, int* Damage, int* Defend, int ArrDemo[]) {
	//玩家可以使用攻防卡，需要提前定义
	if (Action == 1) {
		*Damage = 5;
		*Defend = 0;
		printf("你对怪物造成了%d点伤害\n", *Damage);
		ArrDemo[0] = *Damage;

	}
	else if (Action == 2) {
		*Defend = 5;
		*Damage = 0;
		printf("你增加了护盾，下次受到伤害减少%d\n", *Defend);
		ArrDemo[0] = *Defend;
		if (*Defend < 0) {
			*Defend = 0;
		}
	}
}

