//#include<stdio.h>
//
///*
//	����:����Ķ��ֲ���
//	��7��23��79��81��103��127��131��147�в�������
//
//	��������ֵ���ҷ�
//	mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min)
//	��ֵ����: mid�����ܵĿ���Ҫ���ҵ����ݣ�����Ҫ�����ݾ����ܵķֲ����ȣ�ÿ������֮��Ĳ�ֵ�����
//	�ϸ���� [1, 2, 3, 4, 5]
//	���ƾ��� [5, 10, 15, 20, 26]
//	�Ǿ��ȷֲ� [1, 2, 4, 8, 16]��[1, 5, 10, 25, 100]��
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
////������ֵ����
///*
//˼·���޸�mid����
//ԭ��ȡֵ���ж�mid��num�Ĵ�С������ȥ����һ�ߵ���ֵ
//������ֱ�����ò�ֵ��ʽ�����������num��mid���Ż�ѭ������
//mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min)
//
//*/
//
//
//int binaruSearch(int arr[], int len, int num) {
//	int min = 0;
//	int max = len - 1;
//	//num ��Ԫ�أ�min max��������
//	while (min <= max) {
//		int mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min);
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
