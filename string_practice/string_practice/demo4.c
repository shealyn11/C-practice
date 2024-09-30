//#include<stdio.h>
//#include <string.h>
//
//
//int main() {
//	
//
//	char* str1 = "abc";// 底层会把字符数组放在只读常量区(只能读，不能修改复用)
//	char str2[100] = "abc";
//	char str3[5] = { 'q','w','e', 'r','\0' };
//		
//	printf("----------strlen(长度)----------\n");
//	//细节1:str1en这个函数在统计长度的时候，是不计算结束标记的
//	//细节2:在windows中，默认情况下，一个中文占两个字节
//	//int len1 =strlen(str1);//3
//	//int len2 =strlen(str2);//3
//	//int len3 =strlen(str3);//4
//	//		
//	//printf("%d\n”,len1);
//	//printf("%d\n"，1en2);
//	//printf("%d\n"，len3);
//
//	printf("----------strcat(拼接)----------\n");
//	//将第二个字符串里的内容拼接到第一个字符串的结尾
//	//		前提1：第一个字符串可以被修改
//	//		前提2：第一个字符串剩余空间可以容纳被拼接的字符串
//	//strcat(str2, str3);
//	//printf("%s\n", str2);  //abcqwer
//	//printf("%s\n", str3);  //qwer
//
//	printf("----------strcpy(拷贝)----------\n");
//	// 将第二个字符串的内容覆盖掉第一个字符串的内容
//	//		前提1：第一个字符串可以被修改
//	//		前提2：第一个字符串空间可以容纳被拷贝来的字符串
//	//strcpy(str2, str3);
//	//printf("%s\n", str2);  //qwer
//	//printf("%s\n", str3);  //qwer
//
//	printf("----------strcmp(比较)----------\n");
//	//完全一样：返回0
//	//只要有一个不一样(包括顺序不同):非0
//	//int res = strcmp(str1, str2);
//	//printf("%d\n", res); 
//
//	printf("----------strlwr(变小写)----------\n");
//	//只能转换英文的大小写
//	//_strlwr(str2);
//	//printf("%s\n", str2);  
//
//	printf("----------strupr(变大写)----------\n");
//	//只能转换英文的大小写
//	//_strupr(str3);
//	//printf("%s\n", str3);   
//
//
//	return 0;
//}
