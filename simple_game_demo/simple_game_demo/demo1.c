//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int MasterAttack();
//void PlayerActions(int Action, int* Damage, int* Defend, int ArrDemo[]);
///*
//* ����
//* ��Ҫ����˫��Ѫ�����غ�������ѭ����
//* ���﹥���ֶΣ�����˺�
//	������//��ҹ����ֶ�
//
//
//	//�����������֣����������������
//*/
//int main() {
//	int PlayerBlood = 100;//���Ѫ��
//	int MasterBlood = 10;//����Ѫ��
//	srand(time(NULL));//�������ӣ�����˺�
//	int Action;//���������Ϊ
//	int ArrDemo[] = { 0 };//���������Ϊ����ֵ
//
//	while (PlayerBlood > 0 && MasterBlood > 0) {
//
//		
//		int Defend = 0;//���û���
//		int Damage = 0;//�����˺�
//
//		//�����ж�Ԥ��
//		Damage = MasterAttack();
//		printf("���ｫ��������%d���˺�\n", Damage);
//
//		int isMonsterDefeated = 0; // ��ʶ�����Ƿ񱻴��
//
//		for (int i = 1; i <= 3; i++) {
//			//����ж��ִ�
//			printf("��������Ҫʹ�õļ��ܣ�\n");
//			printf("1.����\n");
//			printf("2.����\n");
//			scanf_s("%d", &Action);
//
//			PlayerActions(Action, &Damage, &Defend, ArrDemo);
//			MasterBlood = MasterBlood - Damage;
//			printf("�����ܵ�%d���˺�������Ѫ��Ϊ%d\n", Damage, MasterBlood);
//
//
//			if (MasterBlood <= 0) {
//				printf("���ﱻ���ܣ�\n");
//				isMonsterDefeated = 1;
//				break;
//			}
//		}
//
//		if (isMonsterDefeated) {
//			break;// ���ﱻ����˳�ս��ѭ��
//		}
//		
//
//		//�����ж��ִ�
//		
//		int ActualDamage = Damage - Defend;//����һ������ȷ���ȹ�������
//		if (ActualDamage < 0) ActualDamage = 0; // ȷ���˺���Ϊ��
//
//		PlayerBlood -= ActualDamage;
//		
//		printf("����ܵ�%d���˺�������Ѫ��Ϊ%d\n", ActualDamage, PlayerBlood);
//
//
//		if (PlayerBlood <= 0) {
//			printf("��ұ����ܣ�\n");
//		}
//
//	}
//
//	return 0;
//}
//
////���﹥���˺�
//int MasterAttack() {
//	int damage = rand() % 10 + 1;
//	return damage;
//}
//
////��������ж�
//void PlayerActions(int Action,int* Damage,int* Defend,int ArrDemo[]) {
//	//��ҿ���ʹ�ù���������Ҫ��ǰ����
//	if (Action == 1) {
//		*Damage = 5;
//		*Defend = 0;
//		printf("��Թ��������%d���˺�\n", *Damage);
//		ArrDemo[0] = *Damage;
//		
//	}
//	else if (Action == 2) {
//		*Defend = 5;
//		*Damage = 0;
//		printf("�������˻��ܣ��´��ܵ��˺�����%d\n",*Defend);
//		ArrDemo[0] = *Defend;
//		if (*Defend < 0) {
//			*Defend = 0;
//		}
//	}
//}
//
////������＼��
//void MasterAcctions() {
//
//}