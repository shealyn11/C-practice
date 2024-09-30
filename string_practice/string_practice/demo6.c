#include<stdio.h>

/*
	键盘录入一个字符串，统计该字符串中大写字母字符，
	小写字母字符，数字字符出现的次数
	(不考虑其他字符)
*/
int main() {
	//思路：先定义字符数组来收集键盘录入的字符串
	//6
	//直接判断是否在'a'-'z'就是小写字母


	char str[100];
	printf("请输入一段大小写数字密码\n");
	scanf("%s", str);

	//统计判断
	int small = 0;
	int big = 0;
	int numcount = 0;
	for (int i = 0; i < strlen(str); i++) {
		char c = str[i];
		if (c >= 'a' && c <= 'z') {
			small++;
		}
		else if (c >= 'A' && c <= 'Z'){
			big++;
		}
		else if (c >= '0' && c <= '9') {
			numcount++;
		}
	}
	printf("大写出现了%d次\n", big);
	printf("小写出现了%d次\n", small);
	printf("数字出现了%d次\n", numcount);





	return 0;
}




