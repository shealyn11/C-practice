//#include<stdio.h>
//#include<stdlib.h>//内库，包含随机数生成
//#include<time.h>
///*
//需求:生成10个1~100之间的随机数存入数组
//求出所有数据的和
//*/
//
///*升级需求：
////1、数据不能重复
//2、求数据的平均数
//3、统计多少数据比平均数少
//*/
//
//int contains(int arr[], int len, int num);
//
//int main() {
//	srand(time(NULL));
//
//	int arr[10] = { 0 };/*将第一个元素赋值为0，并且后面的元素也会初始化为0
//	初始化中后面元素默认为0  第一个元素必写，写0是最好的*/
//	/*若[]内不写，则定义了一个元素为0，而不是需求中的10个元素*/
//	int len = sizeof(arr) / sizeof(int);
//
//
//	int sum = 0;//定义求和容器a
//	int low = 0;//定义统计低于平均数的容器
//
//	for (int i = 0; i < len; ) {
//		int num = rand() % 100 + 1;//每次循环生成一个随机数
//
//		//存入之前要判断
//		int flag = contains(arr,len,num);//赋值一个变量引入函数的结果 1 or 0
//		//0为不存在即为！flag   1为存在，即为跳过存入数组和i++
//
//		if (!flag) {
//			arr[i] = num;//将随机数存入数组中的第i个元素，实现存入数组
//			i++;//将i++从小括号中移到判断之后。解决有相同数字的时候会出现跳过的bug
//		}
//	
//	}
//
//
//	//求和
//	for (int i = 0; i < len; i++) {
//		//printf("%d\n", arr[i]);
//		sum = sum + arr[i];
//		
//	}
//
//	int average = sum / len;//求平均数 = 总数 / 个数
//	for (int i = 0; i < len; i++){
//		if (average > arr[i]) {
//			//判断统计多少数据低于平均数
//			low++;
//
//		}
//	}
//	
//	
//	printf("这个数组的和是%d\n", sum);
//	printf("这个数组的平均数是%d\n", average);
//	printf("数组里低于平均数的数量有%d个\n", low);
//
//	
//	
//
//
//	return 0;
//}
//
//
//
////判断num在函数里是否存在，存在返回1，不存在返回0
//int contains(int arr[], int len, int num) {
//	for (int i = 0; i < len; i++) {
//		if (arr[i] == num) {
//			return 1;
//		}
//	}
//	return 0;
//}