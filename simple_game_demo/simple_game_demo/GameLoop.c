#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "Player.h"
#include "Master.h"



int main() {
	int PlayerBlood = 100;//���Ѫ��
	int MasterBlood = 10;//����Ѫ��
	srand(time(NULL));//�������ӣ�����˺�
	int Action;//���������Ϊ
	int ArrDemo[] = { 0 };//���������Ϊ����ֵ

	while (PlayerBlood > 0 && MasterBlood > 0) {


		int Defend = 0;//���û���
		int Damage = 0;//�����˺�

		//�����ж�Ԥ��
		Damage = MasterAttack();
		printf("���ｫ��������%d���˺�\n", Damage);

		int isMonsterDefeated = 0; // ��ʶ�����Ƿ񱻴��
		//����ж��ִ�


		for (int i = 1; i <= 3; i++) 
		{
			//�ж�����
			printf("��������Ҫʹ�õļ��ܣ�\n");
			printf("1.����\n");
			printf("2.����\n");
			scanf_s("%d", &Action);

			PlayerActions(Action, &Damage, &Defend, ArrDemo);
			MasterBlood = MasterBlood - Damage;
			printf("�����ܵ�%d���˺�������Ѫ��Ϊ%d\n", Damage, MasterBlood);


			if (MasterBlood <= 0) {
				printf("���ﱻ���ܣ�\n");
				isMonsterDefeated = 1;
				break;
			}
		}

		if (isMonsterDefeated) {
			break;// ���ﱻ����˳�ս��ѭ��
		}


		//�����ж��ִ�

		int ActualDamage = Damage - Defend;//����һ������ȷ���ȹ�������
		if (ActualDamage < 0) ActualDamage = 0; // ȷ���˺���Ϊ��

		PlayerBlood -= ActualDamage;

		printf("����ܵ�%d���˺�������Ѫ��Ϊ%d\n", ActualDamage, PlayerBlood);


		if (PlayerBlood <= 0) {
			printf("��ұ����ܣ�\n");
		}

	}

	return 0;
}

