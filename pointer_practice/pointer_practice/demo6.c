//#include<stdio.h>
//
////循环交换
////利用char一个字节一个字节的交换
//void swap(void* p1, void* p2, int len) {
//	char* pc1 = p1;
//	char* pc2 = p2;
//
//	char temp = 0;
//	for (int i = 0; i < len; i++) {
//		temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//
//		pc1++;
//		pc2++;
//	}
//}
//
//int main() {
//	int a = 5, b = 10;
//	printf("Before swap: a = %d, b = %d\n", a, b);
//
//	// 这里没有直接赋值给 len，而是通过 sizeof(int) 来提供 len 的值
//	swap(&a, &b, sizeof(int));  // 传入 a 和 b 的地址，以及它们的大小
//
//	printf("After swap: a = %d, b = %d\n", a, b);
//
//	return 0;
//}