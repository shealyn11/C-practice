//#include<stdio.h>
//
///*
//	����:����Ķ��ֲ���
//	��7��23��79��81��103��127��131��147�в�������
//*/
//
//int binaruSearch(int arr[], int len, int num);
//
//int main() {
//	
//	int arr[] = { 7,23,79,81,103,127,131,147 };
//	int len = sizeof(arr) / sizeof(int);
//	//printf("%d\n", len);
//
//	int num;//����Ҫ���ҵ�����
//	printf("��������Ҫ��ѯ�����֣�");
//	scanf_s("%d", &num);
//
//	int index = binaruSearch(arr, len, num);//����һ��������ȡ���ص���ֵ�����ж�
//	if (index == -1) {
//		printf("��ѯ���������ֵ");
//	}
//	else {
//		printf("�������������%d��", index);
//	}
//	
//	return 0;
//}
//
////д��������ʾ���ֲ��ң��ҵ��˷���������δ�ҵ�����-1
//
//int binaruSearch(int arr[], int len, int num) {
//	int min = 0;
//	int max = len -1;
//	//num ��Ԫ�أ�min max��������
//	while (min <= max) {
//		int mid = (max + min) / 2;
//		if (arr[mid] < num) {
//			//���Ҫ���ҵ��������м������ұ�
//			//Ҳ����minҪ��С���м���
//			min = mid + 1;
//		}
//		else if (arr[mid] > num) {
//			max = mid - 1;
//		}
//		else {
//			return mid;
//		}
//
//	}
//	
//	return -1;
//}
