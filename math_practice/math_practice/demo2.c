//#include<stdio.h>
//
///*1��1�η�+2��2�η�+3��3�η� +...+10��10�η�������Ƕ���?
//��ʾ:���������long long����
//*/
//int main() {
//	
//	int i = 1;
//	long long res = 0;
//	for (i; i <= 10; i++) {
//
//		long long count = 1;
//		//�����ü�����count
//
//		for (int j = 1; j <= i;j++) {
//			//��ѭ��j�η�
//
//			count = count * i;
//			//��һ����ѭ�� 1 = 1*1 
//			//�ڶ�����ѭ�� i= 2,j = 2, count = 1*2 �ڶ���jѭ�� count = 2 *2=4
//		}
//		res = res + count;//��ѭ���ۼ�
//		//printf("������%lld\n", res);
//	}
//	printf("���Ϊ%lld", res);
//
//	return 0;
//}