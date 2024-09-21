//#include<stdio.h>
///*
//需求:已知数组元素为{33,5,22,44,55}
//请找出数组中最大值并打印在控制台
//*/
//
//int main() {
//
//	int arr[] = {33, 5, 22, 44, 55};//定义数组
//	int max = arr[0];//定义最大值容器,从0索引开始，若定义为0 数组为负数会产生错误
//
//	//for (int i = 0; i < 5; i++){}		遍历没有通用性
//
//	int len = sizeof(arr) / sizeof(int);//赋值len计算元素数量（通过内存计算）
//	for (int i = 1; i < len; i++) {
//		//遍历数组，max是0索引，所以循环从1 开始提高效率
//		
//		//printf("%d\n", arr[i]);
//		if (max < arr[i]) {
//			max = arr[i];//最大值有变化就赋值
//
//			/*三元的方法
//			max = max > arr[i] ? max : arr[i];//取更大的值赋值给max
//			*/
//
//			//printf("%d\n", max);		
//		}
//
//
//	}
//	
//	printf("这个数组的最大值是%d\n", max);//输出最大值
//
//
//
//	return 0;
//}