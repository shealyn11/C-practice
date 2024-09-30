#include<stdio.h>

/*指针的作用二:
函数返回多个值练习:
定义一个的数，求数组的最大值和最小值，并进行返回
*/

void getmaxmin(int arr[], int len, int* max, int* min);
//函数括号中的arr[]是数组里的具体元素

int main() {
	int arr[] = { 1,0,3,4,5,6 };//定义数组
	int len = sizeof(arr) / sizeof(int);//定义数组长度


	int max = arr[0];//赋值
	int min = arr[0];//赋值

	getmaxmin(arr, len, &max, &min);//调用函数
	//调用函数的值,arr---main里定义好的数组,用于访问数组中的元素和计算
	//len---用于防止函数越界
	// &max和&min,由于在里面需要修改,所以用到了指针

	/*
		思路：main函数里调用getmaxmin函数，先传入max和min的内存地址也就是&max, &min
		导入到函数里就变成了max和min，他们现在是指针，指向 main 函数中的 max 和 min 变量的地址

		然后在函数里*max解引出来（这个时候是正常的变量，即 main 函数中的 max 和 min）
			并赋值新的最大值进去（最小值同理）

		最终他们返回回去的是max和min解引后的值也就是函数中的*max和*min
		max和min在主函数里是正常的变量
	
	*/
	printf("数组中的最大值是：%d\n", max);
	printf("数组中的最小值是：%d\n", min);

	return 0;
}
void getmaxmin(int arr[],int len,int* max,int* min) {

	*max = arr[0];//赋值到了第0个索引也就是数字1
	for (int i = 0; i < len; i++) {
		//将数组中的循环找最大值，假设找到了一个就复制到最大值的指针里
		if (arr[i] > *max) {
			*max = arr[i];//找到一个比目前max大的值就赋值过去
		}
	}

	*min = arr[0];
	for (int i = 0; i < len; i++) {
		//同最大值
		if (arr[i] < *min) {
			*min= arr[i];
		}
	}
}