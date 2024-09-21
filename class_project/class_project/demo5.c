//#include<stdio.h>
//#include<stdlib.h>//standard library 标准库
//#include<time.h>
//
//
//
///*伪随机数：线性同余方程
//	随机数	<stdlib.h>		//standard library标准库
//	srand()		设置种子
//	rand()		获取随机数
//	
//范围内取随机数
//	绝招:用于生产任意范围之内的随机数 （1-100）
//		1.把这个范围变成包头不包尾，包左不包右的1-101（尾+1）
//		2.拿着尾巴 -开头	101-1= 100 （取余）
//							int sum = rand() % 100（取余） + 1（+开头）;//获取随机数
//		3.修改代码	（+开头）
//*/
//
//
//
//int main() {
//
//	srand(time(NULL));//设置种子,
//	for (int i = 1; i <= 10; i++) {
//		
//		int sum = rand();//获取随机数
//		printf("这是第%d个随机数%d\n", i , sum);
//
//	}
//
//	srand(time(NULL));//设置种子,
//	for (int i = 1; i <= 10; i++) {
//
//		int sum2 = rand() % 100 + 1;//获取随机数
//		printf("这是第%d个随机数%d\n", i, sum2);
//
//	}
//
//	
//
//
//	return 0;
//}