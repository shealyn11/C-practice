//#include<stdio.h>
//
////利用指针来修改数据
//void swap(int* p1, int* p2);
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	printf("调用前：%d,%d\n", a, b);
//
//	//调用函数指针的时候用a和b的地址（+&）
//	swap(&a, &b);
//	printf("调用后：%d,%d", a, b);
//
//	return 0;
//}
//void swap(int* p1, int* p2) {
//	//函数中用指针进行交换而不是用变量（形参）
//	int temp = *p1;//解引了直接就是变量a,下面变量b同理,所以返回值直接就是a和b
//	*p1 = *p2;
//	*p2 = temp;
//
//}