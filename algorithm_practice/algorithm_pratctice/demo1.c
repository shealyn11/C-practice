//#include<stdio.h>
//
///*数组的基本查找（顺序查找）*/
//
//int order(int arr[], int len, int num);
//
//int main() {
//	//定义数组
//	int arr[5] = { 10,12,43,44,25 };
//	int len = sizeof(arr) / sizeof(int);
//
//	//假设需要找12
//	int num = 12;
//
//	//思路：将数组遍历，当查到所需元素的时候返回该元素的索引
//
//	int index = order(arr, len, num);//接收返回值
//	printf("%d\n", index);
//
//
//	return 0;
//}
//// 数组遍历函数
//int order(int arr[], int len, int num) {
//	for (int i = 0; i < len; i++) {
//
//		if (arr[i] == num) {
//			return i;
//		}
//	}
//	return -1;
//}
