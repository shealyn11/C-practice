#include<stdio.h>
#include<stdlib.h>
#include<time.h>



/*����1-100֮��������
ʹ�ü���¼��ȥ�£�����Ϊֹ
*/



int main() {

	srand(time(NULL));


	int number = rand() % 100 + 1;
	int guess;
	while (1) {
		printf("���������֣�");
		scanf_s("%d", &guess);
		if (guess == number) {
			printf("�������");
			break;

		}
		else if (guess > number) {
			printf("����ƫ����");
			continue;
		}
		else if (guess < number) {
			printf("����ƫС��");
			continue;
		}


	}
	





	return 0;
}