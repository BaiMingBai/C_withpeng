#define _CRT_SECURE_NO_WARNINGS
//写一个函数找出两个整数的较大值。
int Max(int a, int b) {
	if (a > b)
		return a;
	else if (b > a)
		return b;
	else
		return 0;
}

//写一个函数交换两个整型的内容
void Swap(int* pa, int* pb) {
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//写一个函数判断一个值是不是素数
int is_prime(int a) {
	int i = 0;
	if (1 == a)
		return 0;
	for (i = 2;i <= sqrt(a);i++)
		if (a % i == 0) {
			return 0;
		}
	return 1;
}

//写一个函数判断一年是不是闰年
int is_leap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	return 0;
}

//写一个函数，实现一个整型有序数组的二分查找
int binary_search(int a[], int b, int sz) {
	int left = 0;
	int right = sz - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (a[mid] == b)
			return mid;
		else if (a[mid] > b)
			right = mid - 1;
		else if (a[mid] < b)
			left = mid + 1;
	}
	return -1;
}

//写一个函数，每调用一次这个函数，num增加1
void add_one(int* num) {
	(*num)++;//++的优先级比*高，所以括起来
}