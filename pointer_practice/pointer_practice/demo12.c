#include<stdio.h>

/*
	����ӡ������ˡ������ĸ������û�����¼����������
	ǰ������ʾ������������
	���������ֱ�ʾ���õĺ���
	1:�ӷ�
	2:����
	3:�˷�
	4:����
*/

int add(int num1, int num2);
int subtract(int num1, int num2);
int mul(int num1, int num2);
int division(int num1, int num2);
int main() {

	int num1;
	int num2;
	int function;
	//����һ������װ�ĸ�����ָ��
	//����ָ������
	//�����int�������num1,num2
	int (*arr[4])(int, int) = {add,subtract,mul,division};

	//
	printf("��¼���������ֲ�������\n");
	scanf("%d %d", &num1, &num2);

	printf("��¼��һ�����ֱ�ʾҪ���е�����\n");
	printf("1.�ӷ� 2.���� 3.�˷� 4.����\n");
	scanf("%d", &function);
	
	//���ú���ָ��	function-1������	����num1,num2
	int res = (arr[function - 1])(num1,num2);
	printf("%d\n",res);




	return 0;
}

int add(int num1,int num2) {
	return  num1 + num2;
}
int subtract(int num1, int num2) {
	if (num1 > num2) {
		return num1 - num2;
	}else{
		return num2 - num1;
		//���Ҳ���Լ�
	}
}
int mul(int num1, int num2) {
	return num1 * num2;
}

int division(int num1, int num2) {
	if (num2 != 0) {
		return num1 / num2;
	}
	else { return -1; }
}