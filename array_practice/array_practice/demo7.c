#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
����:����һ�����飬����1~5��Ҫ������������������ݵ�˳��
*/


void printarr(int arr[]);

int main() {
  
	//˼·���������飬ʹ���������ѡ��һ��Ԫ���뵱ǰ������Ԫ�ؽ��н���
	//��������
	int arr[5] = { 1,2,3,4,5 };
	printf("��һ�α���\n");
	printarr(arr);
	int len = sizeof(arr) / sizeof(int);
	srand(time(NULL));
	for (int i = 0; i < len; i++) {

		int index = rand() % len;//��ȡ�������
		int temp = arr[i];//��ʱ��������arr[i]
		arr[i] = arr[index];//indexԪ�ظ�ֵ��i
		arr[index] = temp;//��ʱ���������i��ֵ��index��������ɽ���
		//index��forѭ���ڵ���ʱ�����������������Ǹ�Ԫ���Ѿ��������ˣ�����index��Ӱ�����յ�����
	}
	printf("�ڶ��α���\n");
	printarr(arr);




	return 0;
}
void printarr(int arr[]) {

	//printf("%p\n", arr);

	//�����������
	for(int i = 0 ;i < 5;i++){
		printf("%d\n", arr[i]);

	}
}