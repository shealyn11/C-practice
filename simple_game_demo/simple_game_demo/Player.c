#include "Player.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//��������ж�
void PlayerActions(int Action, int* Damage, int* Defend, int ArrDemo[]) {
	//��ҿ���ʹ�ù���������Ҫ��ǰ����
	if (Action == 1) {
		*Damage = 5;
		*Defend = 0;
		printf("��Թ��������%d���˺�\n", *Damage);
		ArrDemo[0] = *Damage;

	}
	else if (Action == 2) {
		*Defend = 5;
		*Damage = 0;
		printf("�������˻��ܣ��´��ܵ��˺�����%d\n", *Defend);
		ArrDemo[0] = *Defend;
		if (*Defend < 0) {
			*Defend = 0;
		}
	}
}

