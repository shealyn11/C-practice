//#include<stdio.h>
//
///*
//	��ά����Ķ����ʽ�� + ��������
//	����:�����Ȱ����е�һά���鶨����ϣ��ٷ��뵽��ά���鵱��
//*/
//
//void loop(int lenarr[], int* arr[]);
//
//int main() {
//	int arr1[3] = { 1, 2, 3 }; 
//	int arr2[5] = { 1, 2, 3 ,4, 5 }; 
//	int arr3[9] = { 1, 2, 3 ,4, 5, 6, 7, 8 ,9 };
//
//	//Ԥ�ȼ���ÿһ���������ʵ����
//
//	int len1 = sizeof(arr1) / sizeof(int);
//	int len2 = sizeof(arr2) / sizeof(int);
//	int len3 = sizeof(arr3) / sizeof(int);
//
//	//�ڶ���һ������װ����ĳ���
//	int lenarr[3] = { len1,len2,len3 };
//
//
//	int* arr[3] = { arr1,arr2,arr3 };
//	//int len = sizeof(arr[i]) / sizeof(int);
//	//ʹ�����������м����ʱ��,�˻���ָ���һ��Ԫ�ص�ָ��,��������������
//	//���������sizeof(arr[i])=��Ϊwin64λ---8���ֽ�
//	//sizeof(arr[i])���ﷵ�ص���ָ��Ĵ�С
//	
//	loop(lenarr, arr);
//
//	
//	return 0;
//}
//
//void loop(int lenarr[],int* arr[]) {
//	for (int i = 0; i < 3; i++) {
//		//i��ʾ��ά���������
//		for (int j = 0; j < lenarr[i]; j++) {
//
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//}