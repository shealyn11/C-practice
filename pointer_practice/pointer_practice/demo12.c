#include<stdio.h>

/*
	定义加、减、乘、除、四个函数用户键盘录入三个数字
	前两个表示参与计算的数字
	第三个数字表示调用的函数
	1:加法
	2:减法
	3:乘法
	4:除法
*/

int add(int num1, int num2);
int subtract(int num1, int num2);
int mul(int num1, int num2);
int division(int num1, int num2);
int main() {

	int num1;
	int num2;
	int function;
	//定义一个数组装四个函数指针
	//函数指针数组
	//这里的int是输入的num1,num2
	int (*arr[4])(int, int) = {add,subtract,mul,division};

	//
	printf("请录入两个数字参与运算\n");
	scanf("%d %d", &num1, &num2);

	printf("请录入一个数字表示要进行的运算\n");
	printf("1.加法 2.减法 3.乘法 4.除法\n");
	scanf("%d", &function);
	
	//调用函数指针	function-1是索引	输入num1,num2
	int res = (arr[function - 1])(num1,num2);
	printf("%d\n",res);




	return 0;
}

int add(int num1,int num2) {
	return  num1 + num2;
}
int subtract(int num1, int num2) {
	if (num1 > num2) {
		return num1 - num2;
	}else{
		return num2 - num1;
		//相等也可以减
	}
}
int mul(int num1, int num2) {
	return num1 * num2;
}

int division(int num1, int num2) {
	if (num2 != 0) {
		return num1 / num2;
	}
	else { return -1; }
}