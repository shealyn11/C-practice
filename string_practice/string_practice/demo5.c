//#include<stdio.h>
//#include<string.h>
///*
//	����:��֪��ȷ���û��������룬���ó���ʵ��ģ���û���¼
//	�ܹ������λ��ᣬ��¼֮�󣬸�����Ӧ����ʾ
//
//*/
//int judgment(char* username, char* password, char* Tuname, char* Tpwd);
//int main() {
//	//˼·���ȶ������ȷ���˻����룬���û������˻����룬Ȼ������ж�
//	//�û���������������һ������ȷ�ͷ���-1
//	//ѭ���ж����Σ������δ����򷵻�һ����ʾ
//	//�ɹ�����һ����ʾ
//
//
//	char Tuname[100] = "admin123";//�������˻�����
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
//			printf("����������࣬��ֹ��¼");
//			break;
//		}
//		else
//		{
//
//			printf("����������û���\n");
//			scanf("%s", &username);
//			printf("�������������\n");
//			scanf("%s", &password);
//			int demo = judgment(username, password, Tuname, Tpwd);
//			//��ȡ����ֵ�������ж�
//			if (demo == 0) {
//				printf("�ɹ���¼");
//				break;
//			}
//			else
//			{
//				time--;
//				printf("����˻���������������ԣ�����%d�λ���\n", time);
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
