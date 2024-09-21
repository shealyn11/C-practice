//#include <stdio.h>
//#include <math.h>
////反转指定数字
//
//int main() {
//
//	int first_number = 123;//自定义整数
//	int Number_of_digits = 3;//位数
//	int new_number;
//	int final_number = 0;
//	//对10取余
//	while (first_number > 0) {
//		new_number = first_number % 10;//new = 3 
//		/*printf(new_number);*/
//		first_number = first_number / 10;//first = 12
//		/*printf(first_number);*/
//		Number_of_digits--;//位数-1
//		/*printf(Number_of_digits);*/
//		new_number = new_number * pow(10, Number_of_digits);//new变成百位/十位/个位数
//		final_number = final_number + new_number;//final+各个位数
//
//	}
//	printf("最后的数字是：%d\n", final_number);
//
//
//	return 0;
//
//
//}