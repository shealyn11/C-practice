//#include<stdio.h>
//
///*
//	需求:定义一个数组存储5个学生的名字并进行遍历
//
//*/
//int main() {
//	char strall[5][100] = {
//		"zhangsan",
//		"lisi",
//		"wangwu",
//		"zhaoliu",
//		"sunqi"
//	};
//
//	//遍历字符串
//	//char* p = strall;//定义一个指针存储字符串
//	for (int i = 0; i < 5; i++) {
//		char* str = strall[i];
//		printf("%s\n", str);
//	}
//	
//	char* strall2[5] = {
//		"zhangsan",
//		"lisi",
//		"wangwu",
//		"zhaoliu",
//		"sunqi"
//	};
//	for (int i = 0; i < 5; i++) {
//		char* str = *strall2[i];
//		printf("%s", str);
//	}
//	
//
//
//
//	return 0;
//}