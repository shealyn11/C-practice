#include<stdio.h>

/*
	����¼��һ���ַ�����ͳ�Ƹ��ַ����д�д��ĸ�ַ���
	Сд��ĸ�ַ��������ַ����ֵĴ���
	(�����������ַ�)
*/
int main() {
	//˼·���ȶ����ַ��������ռ�����¼����ַ���
	//6
	//ֱ���ж��Ƿ���'a'-'z'����Сд��ĸ


	char str[100];
	printf("������һ�δ�Сд��������\n");
	scanf("%s", str);

	//ͳ���ж�
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
	printf("��д������%d��\n", big);
	printf("Сд������%d��\n", small);
	printf("���ֳ�����%d��\n", numcount);





	return 0;
}




