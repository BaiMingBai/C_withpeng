#define _CRT_SECURE_NO_WARNINGS*///忽视这个警告
#include<stdio.h>//调用函数：1.库函数-c语言本身提供给我们的函数，使用时需要调用（//include<stdio.h>）。stdio.h是standard input output的缩写，表示输入和输出函数。

int main()//主函数——是程序的入口，整个代码从这里开始执行。（整个代码不能没有main函数，也不能有多个main函数）。
{
	//在这里完成任务-新手村
	printf("fuck you!\nbitch\n");
	char chi = 'A';//意思是向内存申请一个字符类型的空间命名为chi，chi的值是A。但是char好像只能写一个字节的大小。
	printf("%c\n", chi);//"%c"表示所有字符类型的数据，也就是说这里以字符的形式打印chi数据。
	int weight = 45;
	printf("%d\n", weight);//"%d"表示十进制数据。
	float high = 158.2f;
	printf("%f\n", high);
	double pi = 3.14;
	printf("%lf\n", pi);
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));//sizeof()报告大小。

//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//所有变量的定义都要在当前代码块的最前面。
	scanf("%d%d", &num1, &num2);//scanf()是输入函数；&是取地址符号。
	sum = num1 + num2;
	printf("和=%d\n", sum);
  
	return 0;
}

//数据类型			含义				  符号	大小
// 
//1.char        字符类型		  %c		1
//2.short			  短整型			  %d		2
//3.int				  整型				  %d		4
//4.long			  长整型			  %d		4/8（>=4）
//5.long long		更长的整型	  %d		8
//6.float			  单精度浮点数  %f		4
//7.double			双精度浮点数  %lf		8
//
//
//变量类型		
//局部变量	定义在代码块（{}）之内的变量。局部变量的作用域只有其所在的局部。
//全局变量	定义在代码块（{}）之外的变量。全局变量的作用域是整个工程（别的源文件里也能用）。
//
