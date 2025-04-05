#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
//写一个函数依次打印一个数组的每个数
void print(int num) {
	if (num > 9) {
		print( num / 10);
	}
	printf("%d ", num%10);
}

//写一个求字符串长度的函数
//方法1：使用了临时变量count
int mylen(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

//方法2：没有临时变量，使用递归
int mylen_pro(char* str) {
	if (*str == '\0') {
		return 0;
	}
	else {
		return 1 + mylen_pro(str + 1);
	}
}

//递归的方式写n的阶乘
int jiecheng(int n) {
	if (1 == n)
		return 1;
	else
		return n * jiecheng(n - 1);
}

//计算第n个斐波那契数
//方法1：递归。非常的低效，不推荐
int fib(int n) {
	if (n>2)
		return fib(n - 1) + fib(n - 2);
	else
		return 1;
}

//方法2：迭代。高效。
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


//函数递归的几个经典题目：1.汉诺塔问题；2.青蛙跳台问题。







