//#include<stdio.h>
////打印正反三角形
//
//int main() {
//	
//	//int j = 1;
//	for (int i = 1 ; i <= 5; i++) {
//		//i=1，循环流程结束才+1
//		//换行后i = 2，但j也 = 2，所以进内循环只会循环一次打印一个
//		//把j放进去重置掉就可以了
//		for ( int j = 1 ; j <= i; j++) {
//			//j < i = 2,所以进入循环打印一个，并且j+1=2
//			//然后j = 2 > i,结束循环，出去换行
//			printf("*");
//			
//		}
//		printf("\n");
//		//printf("%d\n", i);
//		//printf("%d\n", j);
//	}
//	printf("\n");
//
//		
//		
//		for (int a = 5; a >= 1; a--) {
//			
//			for (int b = 1; b <= a; b++) {
//				
//				printf("*");
//
//			}
//			printf("\n");
//	
//		}
//
//	return 0;
//
//}