//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int MasterAttack();
//void PlayerActions(int Action, int* Damage, int* Defend, int ArrDemo[]);
///*
//* 需求：
//* 需要定义双方血量，回合制无限循环，
//* 怪物攻击手段，随机伤害
//	攻防点//玩家攻击手段
//
//
//	//定义输入数字，来触发攻击或防御
//*/
//int main() {
//	int PlayerBlood = 100;//玩家血量
//	int MasterBlood = 10;//怪物血量
//	srand(time(NULL));//重置种子，随机伤害
//	int Action;//定义玩家行为
//	int ArrDemo[] = { 0 };//接收玩家行为返回值
//
//	while (PlayerBlood > 0 && MasterBlood > 0) {
//
//		
//		int Defend = 0;//重置护盾
//		int Damage = 0;//重置伤害
//
//		//怪物行动预测
//		Damage = MasterAttack();
//		printf("怪物将会对你造成%d点伤害\n", Damage);
//
//		int isMonsterDefeated = 0; // 标识怪物是否被打败
//
//		for (int i = 1; i <= 3; i++) {
//			//玩家行动轮次
//			printf("请输入你要使用的技能：\n");
//			printf("1.攻击\n");
//			printf("2.防御\n");
//			scanf_s("%d", &Action);
//
//			PlayerActions(Action, &Damage, &Defend, ArrDemo);
//			MasterBlood = MasterBlood - Damage;
//			printf("怪物受到%d点伤害，现在血量为%d\n", Damage, MasterBlood);
//
//
//			if (MasterBlood <= 0) {
//				printf("怪物被击败！\n");
//				isMonsterDefeated = 1;
//				break;
//			}
//		}
//
//		if (isMonsterDefeated) {
//			break;// 怪物被打败退出战斗循环
//		}
//		
//
//		//怪物行动轮次
//		
//		int ActualDamage = Damage - Defend;//定义一个数来确保先攻击护盾
//		if (ActualDamage < 0) ActualDamage = 0; // 确保伤害不为负
//
//		PlayerBlood -= ActualDamage;
//		
//		printf("玩家受到%d点伤害，现在血量为%d\n", ActualDamage, PlayerBlood);
//
//
//		if (PlayerBlood <= 0) {
//			printf("玩家被击败！\n");
//		}
//
//	}
//
//	return 0;
//}
//
////怪物攻击伤害
//int MasterAttack() {
//	int damage = rand() % 10 + 1;
//	return damage;
//}
//
////定义玩家行动
//void PlayerActions(int Action,int* Damage,int* Defend,int ArrDemo[]) {
//	//玩家可以使用攻防卡，需要提前定义
//	if (Action == 1) {
//		*Damage = 5;
//		*Defend = 0;
//		printf("你对怪物造成了%d点伤害\n", *Damage);
//		ArrDemo[0] = *Damage;
//		
//	}
//	else if (Action == 2) {
//		*Defend = 5;
//		*Damage = 0;
//		printf("你增加了护盾，下次受到伤害减少%d\n",*Defend);
//		ArrDemo[0] = *Defend;
//		if (*Defend < 0) {
//			*Defend = 0;
//		}
//	}
//}
//
////定义怪物技能
//void MasterAcctions() {
//
//}