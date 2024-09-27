#include<stdio.h>

/*
	冒泡排序:1，相邻的元素两两比较，，大的放右边，小的放左边。
	2.第一轮比较完毕之后，最大值就已经确定，第二轮可以少循环一次，后面以此类推。
	3，如果数组中有n个数据，总共我们只要执行n-1轮的代码就可以以。

	需求:
	利用己泡排序将下列数据按照从小到大的顺序进行排序
	3，5，2，1，4
*/



int main() {
	int arr[] = { 3,5,2,1,4 };
	int len = sizeof(arr) / sizeof(int);

	//这个过程循环i-1次
	for (int i = 0; i < len - 1; i++ ) {

		//循环判断获取最大值放到最右边
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				//如果当前i的值比右边的要大，则进行交换
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		printf("%d,", arr[i]);
	}

	


	return 0;
}





