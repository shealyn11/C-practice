//#include<stdio.h>
//
///*1的1次方+2的2次方+3的3次方 +...+10的10次方，结果是多少?
//提示:结果过大用long long类型
//*/
//int main() {
//	
//	int i = 1;
//	long long res = 0;
//	for (i; i <= 10; i++) {
//
//		long long count = 1;
//		//可重置计数器count
//
//		for (int j = 1; j <= i;j++) {
//			//内循环j次方
//
//			count = count * i;
//			//第一次外循环 1 = 1*1 
//			//第二次外循环 i= 2,j = 2, count = 1*2 第二次j循环 count = 2 *2=4
//		}
//		res = res + count;//外循环累加
//		//printf("现在是%lld\n", res);
//	}
//	printf("结果为%lld", res);
//
//	return 0;
//}