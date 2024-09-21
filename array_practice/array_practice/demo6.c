//#include<stdio.h>
//
///*
//需求:键盘录入5个数据并存入数组，完成以下需求
//1)遍历数组
//2)反转数组
//3)再次遍历
//*/
//
//
//
//int main() {
//	int arr[5] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < len; i++) {
//		printf("请输入第%d个元素",i + 1);
//		scanf_s("%d", &arr[i]);
//	}
//	printf("第一次遍历\n");
//	for (int i = 0; i < len; i++) {
//		printf("%d\n", arr[i]);
//	}
//	//反转数组
//	//思路：将第一个数组遍历的同时赋值到第二个数组，第一个数组倒过来遍历
//	int arr2[5] = { 0 };//定义新数组
//	int j = 0;
//	printf("第二次遍历\n");//反转跟遍历写在一起了，分开的话要在写一个for循环遍历第二个数组zhe
//	for (int i = 4; i >= 0; i--) {
//		int temp = arr[i];//赋值到第二个数组
//		//printf("temp现在是%d\n", temp);
//		arr2[j] = temp;
//		printf("%d\n", arr2[j]);
//		//printf("j现在是%d\n", j);
//		if (j < 4) {
//			j++;
//		}
//		
//		
//	}
//	
//
//
//
//
//	return 0;
//}