#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*	
�ṹ��:
	�Զ�����������;����ɺܶ��������ϳɵ�һ������
	ÿһ�����ݣ����ǽṹ��ĳ�Ա
��д��λ��:
	����������:�ֲ�λ�ã�ֻ���ٱ�������ʹ��
	����������:ȫ��λ�ã������еĺ����ж�����ʹ��
*/


struct GirlFriend
{
	char name[100];
	int age;
	char gender;
	double height;

};
struct GirlFriend2
{
	char name[100];
	int age;
	char gender;
	double height;

};


int main() {
	struct GirlFriend gf1;
	struct GirlFriend2 gf2;
	
	strcpy_s(gf1.name,sizeof(gf1.name), "������΢");
	gf1.age = 10;
	gf1.gender = 'f';
	gf1.height = 160;

	printf("gf1������%s\n", gf1.name);
	printf("gf1������%d\n", gf1.age);

	strcpy_s(gf2.name, sizeof(gf2.name), "���Ǹ����绰");
	gf2.age = 10;
	gf2.gender = 'f';
	gf2.height = 160;

	printf("gf2������%s\n", gf2.name);
	printf("gf2������%d\n", gf2.age);


	return 0;
}
