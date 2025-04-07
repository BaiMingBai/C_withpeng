#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//void test(char x[]) {
//	printf("%d\n", sizeof(x) / sizeof(x[0]));//我的电脑是64位的，sizeof(x)是8，sizeof(x[0])是4，所以结果是2；如果是32位的，sizeof(x)是4，sizeof(x[0])是4，所以结果是1。
//    #include <stdio.h>
//}

void PRINT(int(*p)[5]) {
	int i = 0;
	int j = 0;
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 5;j++) {
			printf("%d ", *(*(p + i)+j));
		}
		printf("\n");
	}
	

}


int main() {
	char a[] = {0};
	test(a);

	int b = 10;
	int* p = &b;

	printf("Size of int: %zu bytes\n", sizeof(b));
	printf("Size of int pointer: %zu bytes\n", sizeof(p));
	printf("Value of p: %p\n", p);//16个16进制，表示64个二进制位。

	char arr[] = "abcdef";
	char* pc = arr;
	printf("%s\n",arr);
	printf("%s\n", pc);//用字符串的形式打印指针，就意味着从这个地址往后找\0，打印\0之前的字符。所以arr和p1是一样的。

	const char* pa = "abcdef";
	//*pa = "A";👉因为"abcdef"是常量字符串，所以值无法改变。所以最准确的写法是在定义的时候加上const。
	printf("%c\n", *pa);//*pa是一个字符，所以只能用%c进行打印。
	printf("%s\n", pa);

	int x = 1;
	int y = 1;
	if (x == y)//比较的是值
		printf("hehe\n");
	else
		printf("haha\n");
	int xa[3] = {1};
	int ya[3] = {1};
	if (xa == ya)//比较的是地址。所有字符串的存储方式都是第一个字符的地址。
		printf("hehe\n");
	else
		printf("haha\n");

	char* p1 = "abcdef";
	char* p2 = "abcdef";
	if (p1 == p2)//比较的是地址。常量只需要有一个地址就可以了，所以p1和p2是同一个地址。
		printf("hehe\n");
	else
		printf("haha\n");


	//********************指针数组********************
	int arr1[3] = { 1, 2, 3 };
	int arr2[3] = { 2, 3, 4 };
	int arr3[3] = { 3, 4, 5 };
	int* parr[] = { &arr1, & arr2,&arr3 };
	int i = 0;
	for (i = 0;i < 3;i++) {
		int j = 0;
		for (j = 0;j < 3;j++) {
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}

	//********************数组指针********************
	int shuzu[] = { 1,2,3,4,5,6,7,8,9 };
	int(* zhizhen)[9] = &shuzu;//要先跟*连接，这就表示，zhizhen这个变量是一个指针，指向含有9个整形变量的数组。
	//int* zhizhenArr[9] = &shuzu;//这种表达无法实现，除非{&a,&b,...,&i}这样写。因为这么写意味着。zhizhenArr这个变量有9个，每个都是指针。

	printf("zhizhen大小：%d\n", sizeof(zhizhen));//就是指针变量的大小喽。
	printf("zhizhen的地址：%p\n",zhizhen);
	printf("zhizhen的地址往后移动一位：%p\n", zhizhen+1);//往后36个字节，正好是shuzu的长度。
	
	//应用：用函数的形式打印二维数组
	int arr_2[3][5] = { {1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7} };
	PRINT(arr_2);



	return 0;
}
//     #define _SEEK_CUR SEEK_CUR