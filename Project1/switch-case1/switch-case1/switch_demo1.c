#include<stdio.h>
#pragma warning(disable:4996)
//根据键盘输入的来输出季节


int main()
{


	int month;
	printf("请输入月份：\n");
	scanf_s("%d", &month);

	//printf("%d\n", month);


	//输出季节判断
	switch (month) {

	case 1:
	case 2:
	case 12:
		printf("冬天");
		break;

	case 3:
	case 4:
	case 5:
		printf("春天");
		break;

	case 6:
	case 7:
	case 8:
		printf("夏天");
		break;

	case 9:
	case 10:
	case 11:
		printf("秋天");
		break;






	default:
		printf("没这个月份");
	}




}