#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
#include<string.h>;
#include<windows.h>;
#include<stdlib.h>;
#include<math.h>;
#include "myfirstfunction.h";
#include "mysecondfunction.h";




//int main() {
//	int t = Max(1, 2);
//	printf("%d\n", t);
//
//	int x = 10;
//	int y = 20;
//	printf("%d %d\n", x, y);
//	Swap(&x, &y);
//	printf("%d %d\n", x, y);
//
//
//	int i = 1;
//	for (i = 1;i <= 20;i++) {
//		int c = is_prime(i);
//		if (c == 1)
//			printf("%d\n", i);
//	}
//
//
//	int year = 0;
//	for (year = 1000;year <= 3000;year++) {
//		int r = is_leap(year);
//		if (r == 1)
//			printf("%d\n", year);
//	}
//
//	int youxu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 44, 56, 88, 99};
//	int bs=binary_search(youxu, 9,15);
//	if (bs == -1)
//		printf("û�ҵ�");
//	else
//		printf("�ҵ��ˣ��±���%d\n",bs);
//
//	int number = 0;
//	add_one(&number);
//	printf("%d\n", number);
//	add_one(&number);
//	printf("%d\n", number);
//	add_one(&number);
//	printf("%d\n", number);
//
//
//		
//	  
//	return 0;
//}



int main() {
	print(123456);

	printf("%d\n", mylen("����ֻ�������"));

	printf("%d\n", mylen_pro("����ĺ�����鱦"));

	printf("%d\n", jiecheng(3));

	printf("%d\n", fib_pro(50)); 


	return 0;
}