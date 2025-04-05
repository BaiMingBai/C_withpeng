#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "array_head.h"
int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8 };
	int i, j;
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 4;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
		
	

	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]); //sz=9
	bouble_sort(arr, sz);
	int n = 0;
	printf("排序后：");
	for (n = 0;n < sz;n++) {
		printf("%d", arr[n]);
	}
	printf("\n");
	
	return 0;
}



//strlen()找\0,数的是\0前的字符数；
//sizeof()只管有几个字节，\0也算一个字节，如果没有\0就只算前面的那些字节数；

//二位数组行能省略，但列不能省略。