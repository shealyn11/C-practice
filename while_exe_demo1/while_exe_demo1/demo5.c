//#include <stdio.h>
////#include <math.h>
///*判断一个整数是否为回文数回文数是指正序(从左向右)和倒序(从右向左)读都是一样的整数
//例如:121 是回文，而 123不是。
//*/
//int main() {
//	
//	int first_number = 121;//自定义整数
//	int save_number = first_number;
//	//int Number_of_digits = 3;//位数
//	int new_number;
//	int final_number = 0;
//	//对10取余
//	while (first_number > 0) {
//		new_number = first_number % 10;//new = 3 
//		/*printf(new_number);*/
//		first_number = first_number / 10;//first = 12
//		/*printf(first_number);*/
//		//Number_of_digits--;//位数-1
//		/*printf(Number_of_digits);*/
//		//new_number = new_number * pow(10, Number_of_digits);//new变成百位/十位/个位数
//		//final_number = final_number + new_number;//final+各个位数
//		final_number = final_number * 10 + new_number;//new变成百位/十位/个位数
//		
//
//	}
//	printf("这个数字是%d\n", final_number);
//	if (save_number == final_number) {
//		printf("这个数字是回文数\n");
//	}
//	else{
//		printf("这个数字不是回文数\n");
//	}
//	
//
//	return 0;
//
//
//}