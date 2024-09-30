//#include<stdio.h>
//#include<string.h>
///*
//	需求:已知正确的用户名和密码，请用程序实现模拟用户登录
//	总共给三次机会，登录之后，给出相应的提示
//
//*/
//int judgment(char* username, char* password, char* Tuname, char* Tpwd);
//int main() {
//	//思路：先定义好正确的账户密码，让用户输入账户密码，然后进行判断
//	//用户名或密码两个有一个不正确就返回-1
//	//循环判断三次，若三次错误则返回一段提示
//	//成功返回一段提示
//
//
//	char Tuname[100] = "admin123";//真正的账户密码
//	char Tpwd[100] = "admin123";
//
//	char username[100];
//	char password[100];
//
//	
//	int time = 3;
//	while (1) {
//
//		if (time == 0) {
//			printf("错误次数过多，禁止登录");
//			break;
//		}
//		else
//		{
//
//			printf("请输入你的用户名\n");
//			scanf("%s", &username);
//			printf("请输入你的密码\n");
//			scanf("%s", &password);
//			int demo = judgment(username, password, Tuname, Tpwd);
//			//获取返回值来进行判断
//			if (demo == 0) {
//				printf("成功登录");
//				break;
//			}
//			else
//			{
//				time--;
//				printf("你的账户或密码错误，请重试，还有%d次机会\n", time);
//				
//			}
//		}
//	}
//
//
//
//
//	return 0;
//}
//
//int judgment(char* username, char* password,char* Tuname,char* Tpwd) {
//	if (strcmp(username, Tuname) == 0 && strcmp(password, Tpwd) == 0) {
//		return 0;
//	}
//
//
//}
//
