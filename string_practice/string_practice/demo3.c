//#include<stdio.h>
//
///*
//	����:����һ������洢5��ѧ�������ֲ����б���
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
//	//�����ַ���
//	//char* p = strall;//����һ��ָ��洢�ַ���
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