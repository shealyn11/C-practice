//#include<stdio.h>
//
///*
//	���ú���ָ����ú���
//*/
//
//
//void method1();
//int method2(int num1, int num2);
//int main() {
//
//
//	//����ָ��ָ����������
//	void (*p1)() = method1;
//	int(*p2)(int, int) = method2;
//
//	//����ָ����ú���
//	p1();
//	int num = p2(10, 20);
//	printf("%d", num);
//
//
//	return 0;
//}
//
//
//void method1() {
//	printf("method1\n");
//
//}
//
//int method2(int num1, int num2) {
//	printf("method2\n");
//	return num1 + num2;
//}