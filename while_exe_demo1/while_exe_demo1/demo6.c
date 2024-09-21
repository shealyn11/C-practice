#include <stdio.h>


/*有两个整数，被除数 dividend 和除数 divisor。
将两数相除，要求不使用乘法、除法和取余运算。
返回被除数 dividend 除以除数 divisor 得到的商和余数。*/


int main() {
	int dividend = 23;//被除数
	int divisor = 3;//除数
	int business = 0;//商
	int remainder;//余数
	//int final_number = 0;//起始数字
	//被除数/除数=商……余数  10 / 3 = 3……1
	//除数*商+余数=被除数   3 * 3 + 1 = 10
	//除数+除数……商（次）+余数=被除数
	//business = dividend / divisor;//商 = 7 / 2 = 3
	//remainder = dividend % divisor;//余数 = 7 % 2 = 1
	while ( dividend > divisor) {
		dividend = dividend - divisor;//累减
		business++;
	}
	remainder = dividend;//最后得到的被除数就是余数
	printf("商：%d\n", business);
	printf("余：%d\n", remainder);

	return 0;


}