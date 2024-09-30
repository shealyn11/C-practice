#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Player.h"
#include "Master.h"



int main() {
	int PlayerBlood = 100;//玩家血量
	int MasterBlood = 10;//怪物血量
	srand(time(NULL));//重置种子，随机伤害
	int Action;//定义玩家行为
	int ArrDemo[] = { 0 };//接收玩家行为返回值

	while (PlayerBlood > 0 && MasterBlood > 0) {


		int Defend = 0;//重置护盾
		int Damage = 0;//重置伤害

		//怪物行动预测
		Damage = MasterAttack();
		printf("怪物将会对你造成%d点伤害\n", Damage);

		int isMonsterDefeated = 0; // 标识怪物是否被打败
		//玩家行动轮次


		for (int i = 1; i <= 3; i++) 
		{
			//行动三轮
			printf("请输入你要使用的技能：\n");
			printf("1.攻击\n");
			printf("2.防御\n");
			scanf_s("%d", &Action);

			PlayerActions(Action, &Damage, &Defend, ArrDemo);
			MasterBlood = MasterBlood - Damage;
			printf("怪物受到%d点伤害，现在血量为%d\n", Damage, MasterBlood);


			if (MasterBlood <= 0) {
				printf("怪物被击败！\n");
				isMonsterDefeated = 1;
				break;
			}
		}

		if (isMonsterDefeated) {
			break;// 怪物被打败退出战斗循环
		}


		//怪物行动轮次

		int ActualDamage = Damage - Defend;//定义一个数来确保先攻击护盾
		if (ActualDamage < 0) ActualDamage = 0; // 确保伤害不为负

		PlayerBlood -= ActualDamage;

		printf("玩家受到%d点伤害，现在血量为%d\n", ActualDamage, PlayerBlood);


		if (PlayerBlood <= 0) {
			printf("玩家被击败！\n");
		}

	}

	return 0;
}

