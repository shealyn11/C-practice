//#include <stdio.h>
////#include <math.h>
///*�ж�һ�������Ƿ�Ϊ��������������ָ����(��������)�͵���(��������)������һ��������
//����:121 �ǻ��ģ��� 123���ǡ�
//*/
//int main() {
//	
//	int first_number = 121;//�Զ�������
//	int save_number = first_number;
//	//int Number_of_digits = 3;//λ��
//	int new_number;
//	int final_number = 0;
//	//��10ȡ��
//	while (first_number > 0) {
//		new_number = first_number % 10;//new = 3 
//		/*printf(new_number);*/
//		first_number = first_number / 10;//first = 12
//		/*printf(first_number);*/
//		//Number_of_digits--;//λ��-1
//		/*printf(Number_of_digits);*/
//		//new_number = new_number * pow(10, Number_of_digits);//new��ɰ�λ/ʮλ/��λ��
//		//final_number = final_number + new_number;//final+����λ��
//		final_number = final_number * 10 + new_number;//new��ɰ�λ/ʮλ/��λ��
//		
//
//	}
//	printf("���������%d\n", final_number);
//	if (save_number == final_number) {
//		printf("��������ǻ�����\n");
//	}
//	else{
//		printf("������ֲ��ǻ�����\n");
//	}
//	
//
//	return 0;
//
//
//}