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
	printf("�����");
	for (n = 0;n < sz;n++) {
		printf("%d", arr[n]);
	}
	printf("\n");
	
	return 0;
}



//strlen()��\0,������\0ǰ���ַ�����
//sizeof()ֻ���м����ֽڣ�\0Ҳ��һ���ֽڣ����û��\0��ֻ��ǰ�����Щ�ֽ�����

//��λ��������ʡ�ԣ����в���ʡ�ԡ�