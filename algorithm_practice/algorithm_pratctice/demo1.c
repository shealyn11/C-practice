//#include<stdio.h>
//
///*����Ļ������ң�˳����ң�*/
//
//int order(int arr[], int len, int num);
//
//int main() {
//	//��������
//	int arr[5] = { 10,12,43,44,25 };
//	int len = sizeof(arr) / sizeof(int);
//
//	//������Ҫ��12
//	int num = 12;
//
//	//˼·����������������鵽����Ԫ�ص�ʱ�򷵻ظ�Ԫ�ص�����
//
//	int index = order(arr, len, num);//���շ���ֵ
//	printf("%d\n", index);
//
//
//	return 0;
//}
//// �����������
//int order(int arr[], int len, int num) {
//	for (int i = 0; i < len; i++) {
//
//		if (arr[i] == num) {
//			return i;
//		}
//	}
//	return -1;
//}
