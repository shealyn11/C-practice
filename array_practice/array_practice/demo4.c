//#include<stdio.h>
//#include<stdlib.h>//内库，包含随机数生成
//#include<time.h>
///*
//需求:生成10个1~100之间的随机数存入数组
//求出所有数据的和
//*/
//
//
//
//int main() {
//	srand(time(NULL));
//	
//	int arr[10] = { 0 };/*将第一个元素赋值为0，并且后面的元素也会初始化为0
//	初始化中后面元素默认为0  第一个元素必写，写0是最好的*/
//	/*若[]内不写，则定义了一个元素为0，而不是需求中的10个元素*/
//	int len = sizeof(arr) / sizeof(int);
//
//
//	int sum = 0;//定义求和容器
//	for (int i = 0; i < len; i++) {
//		int number = rand() % 100 + 1;//每次循环生成一个随机数
//
//		arr[i] =  number ;//将随机数存入数组中的第i个元素，实现存入数组
//		
//
//
//	}for (int i = 0; i < len; i++) {
//		//printf("%d\n", arr[i]);
//		sum = sum + arr[i];
//	}
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}