#define _CRT_SECURE_NO_WARNINGS
//дһ�������ҳ����������Ľϴ�ֵ��
int Max(int a, int b) {
	if (a > b)
		return a;
	else if (b > a)
		return b;
	else
		return 0;
}

//дһ�����������������͵�����
void Swap(int* pa, int* pb) {
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//дһ�������ж�һ��ֵ�ǲ�������
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

//дһ�������ж�һ���ǲ�������
int is_leap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	return 0;
}

//дһ��������ʵ��һ��������������Ķ��ֲ���
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

//дһ��������ÿ����һ�����������num����1
void add_one(int* num) {
	(*num)++;//++�����ȼ���*�ߣ�����������
}