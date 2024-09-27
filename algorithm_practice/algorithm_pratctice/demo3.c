//#include<stdio.h>
//
///*
//	需求:数组的二分查找
//	在7，23，79，81，103，127，131，147中查找数据
//
//	升级：插值查找法
//	mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min)
//	插值查找: mid尽可能的靠近要查找的数据，但是要求数据尽可能的分布均匀（每个数字之间的差值相近）
//	严格均匀 [1, 2, 3, 4, 5]
//	近似均匀 [5, 10, 15, 20, 26]
//	非均匀分布 [1, 2, 4, 8, 16]，[1, 5, 10, 25, 100]等
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
////升级插值查找
///*
//思路：修改mid规则
//原先取值是判断mid和num的大小来决定去除哪一边的数值
//现在是直接利用差值公式计算出更靠近num的mid以优化循环次数
//mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min)
//
//*/
//
//
//int binaruSearch(int arr[], int len, int num) {
//	int min = 0;
//	int max = len - 1;
//	//num 是元素，min max都是索引
//	while (min <= max) {
//		int mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min);
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
