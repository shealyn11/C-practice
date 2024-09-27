//#include<stdio.h>
//
///*
//	二维数组的定义格式二 + 索引遍历
//	核心:事先先把所有的一维数组定义完毕，再放入到二维数组当中
//*/
//
//void loop(int lenarr[], int* arr[]);
//
//int main() {
//	int arr1[3] = { 1, 2, 3 }; 
//	int arr2[5] = { 1, 2, 3 ,4, 5 }; 
//	int arr3[9] = { 1, 2, 3 ,4, 5, 6, 7, 8 ,9 };
//
//	//预先计算每一个数组的真实长度
//
//	int len1 = sizeof(arr1) / sizeof(int);
//	int len2 = sizeof(arr2) / sizeof(int);
//	int len3 = sizeof(arr3) / sizeof(int);
//
//	//在定义一个数组装数组的长度
//	int lenarr[3] = { len1,len2,len3 };
//
//
//	int* arr[3] = { arr1,arr2,arr3 };
//	//int len = sizeof(arr[i]) / sizeof(int);
//	//使用数组名进行计算的时候,退化成指向第一个元素的指针,而不是整个数组
//	//所以这里的sizeof(arr[i])=因为win64位---8个字节
//	//sizeof(arr[i])这里返回的是指针的大小
//	
//	loop(lenarr, arr);
//
//	
//	return 0;
//}
//
//void loop(int lenarr[],int* arr[]) {
//	for (int i = 0; i < 3; i++) {
//		//i表示二维数组的索引
//		for (int j = 0; j < lenarr[i]; j++) {
//
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//}