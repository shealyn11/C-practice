#include<stdio.h>
#include<stdlib.h>
#include<time.h>



/*生成1-100之间的随机数
使用键盘录入去猜，猜中为止
*/



int main() {

	srand(time(NULL));


	int number = rand() % 100 + 1;
	int guess;
	while (1) {
		printf("请输入数字：");
		scanf_s("%d", &guess);
		if (guess == number) {
			printf("你猜中了");
			break;

		}
		else if (guess > number) {
			printf("数字偏大了");
			continue;
		}
		else if (guess < number) {
			printf("数字偏小了");
			continue;
		}


	}
	





	return 0;
}