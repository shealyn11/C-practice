//#include<stdio.h>
//
////ѭ������
////����charһ���ֽ�һ���ֽڵĽ���
//void swap(void* p1, void* p2, int len) {
//	char* pc1 = p1;
//	char* pc2 = p2;
//
//	char temp = 0;
//	for (int i = 0; i < len; i++) {
//		temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//
//		pc1++;
//		pc2++;
//	}
//}
//
//int main() {
//	int a = 5, b = 10;
//	printf("Before swap: a = %d, b = %d\n", a, b);
//
//	// ����û��ֱ�Ӹ�ֵ�� len������ͨ�� sizeof(int) ���ṩ len ��ֵ
//	swap(&a, &b, sizeof(int));  // ���� a �� b �ĵ�ַ���Լ����ǵĴ�С
//
//	printf("After swap: a = %d, b = %d\n", a, b);
//
//	return 0;
//}