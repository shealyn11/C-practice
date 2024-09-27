//#include<stdio.h>
//
///*
//	需求:数组的二分查找
//	在7，23，79，81，103，127，131，147中查找数据
//*/
//
//int binaruSearch(int arr[], int len, int num);
//
//int main() {
//	
//	int arr[] = { 7,23,79,81,103,127,131,147 };
//	int len = sizeof(arr) / sizeof(int);
//	//printf("%d\n", len);
//
//	int num;//定义要查找的数字
//	printf("请输入你要查询的数字：");
//	scanf_s("%d", &num);
//
//	int index = binaruSearch(arr, len, num);//定义一个容器收取返回的数值进行判断
//	if (index == -1) {
//		printf("查询不到这个数值");
//	}
//	else {
//		printf("这个数字在索引%d处", index);
//	}
//	
//	return 0;
//}
//
////写个函数表示二分查找，找到了返回索引，未找到返回-1
//
//int binaruSearch(int arr[], int len, int num) {
//	int min = 0;
//	int max = len -1;
//	//num 是元素，min max都是索引
//	while (min <= max) {
//		int mid = (max + min) / 2;
//		if (arr[mid] < num) {
//			//如果要查找的数字在中间数的右边
//			//也就是min要缩小到中间数
//			min = mid + 1;
//		}
//		else if (arr[mid] > num) {
//			max = mid - 1;
//		}
//		else {
//			return mid;
//		}
//
//	}
//	
//	return -1;
//}
