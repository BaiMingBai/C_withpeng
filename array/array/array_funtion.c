#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//写一个冒泡函数，让数组从小到大排序
void bouble_sort(int arr[], int sz) {
	int j = 0;
	for (j = 0;j < sz;j++) {
		int i = 0;
		int sorted = 1;
		for (i = 0;i < sz - 1-j;i++) {
			if (arr[i] > arr[i + 1]) {
				int tem = 0;
				tem = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tem;
				sorted = 0;
			}			
		}
		if (sorted == 1)
			break;	
	}
}