#include<stdio.h>

/*找出0~1000之内，符合要求的数字:
要求:每一位的数字之和等于15
举例:78，168，1167
*/
int main() {
	int number = 1000; 
	//int button;
	for (int i = 1; i <= number; i++) {
		//printf("这个数字是%d\n", i);
		int sum = 0;//外循环设定方便统计
		int temp = i;//赋值一个变量代替i进入内循环
		//列举1-1000的数字
		while (temp >= 1) {
			//若temp后一位数/10之后会小于1，所以设定一个循环结束条件

			sum = sum + temp % 10;//赋值累加各位
			temp = temp / 10;//赋值进下一次内循环

		}
		if ( sum == 15) {
			//判断是否和为15 列出该数字
			printf("%d这个数字的各位相加和为15\n",i);
		}
		
		
	}
	

	return 0;
}