#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*	
结构体:
	自定义的数据类型就是由很多的数据组合成的一个整体
	每一个数据，都是结构体的成员
书写的位置:
	函数的里面:局部位置，只能再本函数中使用
	函数的外面:全局位置，在所有的函数中都可以使用
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
	
	strcpy_s(gf1.name,sizeof(gf1.name), "我是稍微");
	gf1.age = 10;
	gf1.gender = 'f';
	gf1.height = 160;

	printf("gf1名字是%s\n", gf1.name);
	printf("gf1年龄是%d\n", gf1.age);

	strcpy_s(gf2.name, sizeof(gf2.name), "我是干撒电话");
	gf2.age = 10;
	gf2.gender = 'f';
	gf2.height = 160;

	printf("gf2名字是%s\n", gf2.name);
	printf("gf2年龄是%d\n", gf2.age);


	return 0;
}
