//#include<stdio.h>
//
///*
//指针作用3:
//函数的结果和计算状态分开练习:
//定义一个函数，将两数相除，获取他们的余数
//*/
//int getremainder(int num1, int num2, int* res);
//int main() {
//
//	int a = 10;
//	int b = 3;
//	int res = 0;
//	int flag = getremainder(a, b, &res);
//	if (flag == 0) {
//		printf("获取的余数是%d\n", res);
//	}
//	else if (flag == -1) {
//		printf("被除数不能为0");
//	}
//
//
//
//
//	return 0;
//}
//
//int getremainder(int num1, int num2,int* res) {
//
//	if (num2 == 0) {
//		return -1;
//	}
//	*res = num1 % num2;
//	return 0;
//}
//
