#include <stdio.h>


/*������������������ dividend �ͳ��� divisor��
�����������Ҫ��ʹ�ó˷���������ȡ�����㡣
���ر����� dividend ���Գ��� divisor �õ����̺�������*/


int main() {
	int dividend = 23;//������
	int divisor = 3;//����
	int business = 0;//��
	int remainder;//����
	//int final_number = 0;//��ʼ����
	//������/����=�̡�������  10 / 3 = 3����1
	//����*��+����=������   3 * 3 + 1 = 10
	//����+���������̣��Σ�+����=������
	//business = dividend / divisor;//�� = 7 / 2 = 3
	//remainder = dividend % divisor;//���� = 7 % 2 = 1
	while ( dividend > divisor) {
		dividend = dividend - divisor;//�ۼ�
		business++;
	}
	remainder = dividend;//���õ��ı�������������
	printf("�̣�%d\n", business);
	printf("�ࣺ%d\n", remainder);

	return 0;


}