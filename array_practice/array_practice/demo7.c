#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
需求:定义一个数组，存入1~5。要求打乱数组中所有数据的顺序
*/


void printarr(int arr[]);

int main() {
  
	//思路：遍历数组，使用随机索引选择一个元素与当前遍历的元素进行交换
	//定义数组
	int arr[5] = { 1,2,3,4,5 };
	printf("第一次遍历\n");
	printarr(arr);
	int len = sizeof(arr) / sizeof(int);
	srand(time(NULL));
	for (int i = 0; i < len; i++) {

		int index = rand() % len;//获取随机索引
		int temp = arr[i];//临时变量储存arr[i]
		arr[i] = arr[index];//index元素赋值到i
		arr[index] = temp;//临时变量储存的i赋值到index，至此完成交换
		//index是for循环内的临时变量，但是数组中那个元素已经被交换了，所以index不影响最终的数组
	}
	printf("第二次遍历\n");
	printarr(arr);




	return 0;
}
void printarr(int arr[]) {

	//printf("%p\n", arr);

	//数组遍历函数
	for(int i = 0 ;i < 5;i++){
		printf("%d\n", arr[i]);

	}
}