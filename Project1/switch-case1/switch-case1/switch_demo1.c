#include<stdio.h>
#pragma warning(disable:4996)
//���ݼ�����������������


int main()
{


	int month;
	printf("�������·ݣ�\n");
	scanf_s("%d", &month);

	//printf("%d\n", month);


	//��������ж�
	switch (month) {

	case 1:
	case 2:
	case 12:
		printf("����");
		break;

	case 3:
	case 4:
	case 5:
		printf("����");
		break;

	case 6:
	case 7:
	case 8:
		printf("����");
		break;

	case 9:
	case 10:
	case 11:
		printf("����");
		break;






	default:
		printf("û����·�");
	}




}