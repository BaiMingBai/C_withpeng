#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
//дһ���������δ�ӡһ�������ÿ����
void print(int num) {
	if (num > 9) {
		print( num / 10);
	}
	printf("%d ", num%10);
}

//дһ�����ַ������ȵĺ���
//����1��ʹ������ʱ����count
int mylen(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

//����2��û����ʱ������ʹ�õݹ�
int mylen_pro(char* str) {
	if (*str == '\0') {
		return 0;
	}
	else {
		return 1 + mylen_pro(str + 1);
	}
}

//�ݹ�ķ�ʽдn�Ľ׳�
int jiecheng(int n) {
	if (1 == n)
		return 1;
	else
		return n * jiecheng(n - 1);
}

//�����n��쳲�������
//����1���ݹ顣�ǳ��ĵ�Ч�����Ƽ�
int fib(int n) {
	if (n>2)
		return fib(n - 1) + fib(n - 2);
	else
		return 1;
}

//����2����������Ч��
int fib_pro(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	for (int i = 3;i <= n;i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}


//�����ݹ�ļ���������Ŀ��1.��ŵ�����⣻2.������̨���⡣







