#include<stdio.h>

/*ָ������ö�:
�������ض��ֵ��ϰ:
����һ������������������ֵ����Сֵ�������з���
*/

void getmaxmin(int arr[], int len, int* max, int* min);
//���������е�arr[]��������ľ���Ԫ��

int main() {
	int arr[] = { 1,0,3,4,5,6 };//��������
	int len = sizeof(arr) / sizeof(int);//�������鳤��


	int max = arr[0];//��ֵ
	int min = arr[0];//��ֵ

	getmaxmin(arr, len, &max, &min);//���ú���
	//���ú�����ֵ,arr---main�ﶨ��õ�����,���ڷ��������е�Ԫ�غͼ���
	//len---���ڷ�ֹ����Խ��
	// &max��&min,������������Ҫ�޸�,�����õ���ָ��

	/*
		˼·��main���������getmaxmin�������ȴ���max��min���ڴ��ַҲ����&max, &min
		���뵽������ͱ����max��min������������ָ�룬ָ�� main �����е� max �� min �����ĵ�ַ

		Ȼ���ں�����*max�������������ʱ���������ı������� main �����е� max �� min��
			����ֵ�µ����ֵ��ȥ����Сֵͬ��

		�������Ƿ��ػ�ȥ����max��min�������ֵҲ���Ǻ����е�*max��*min
		max��min�����������������ı���
	
	*/
	printf("�����е����ֵ�ǣ�%d\n", max);
	printf("�����е���Сֵ�ǣ�%d\n", min);

	return 0;
}
void getmaxmin(int arr[],int len,int* max,int* min) {

	*max = arr[0];//��ֵ���˵�0������Ҳ��������1
	for (int i = 0; i < len; i++) {
		//�������е�ѭ�������ֵ�������ҵ���һ���͸��Ƶ����ֵ��ָ����
		if (arr[i] > *max) {
			*max = arr[i];//�ҵ�һ����Ŀǰmax���ֵ�͸�ֵ��ȥ
		}
	}

	*min = arr[0];
	for (int i = 0; i < len; i++) {
		//ͬ���ֵ
		if (arr[i] < *min) {
			*min= arr[i];
		}
	}
}