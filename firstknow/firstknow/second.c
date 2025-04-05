#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
int main()
{
	int number = 0;
//一、常量
#define tomorrow 331//defien和所有变量的定义一样要在当前代码块的最前面。
	//1. 字面常量
	// 
	//2. const修饰的常变量
	const int cbl = 188;//const表示常属性。此时cbl是被修饰的常变量，是变量但是具有常属性，不能变。
	printf("%d\n", cbl);

	//3. define定义的标识符常量
	int arr[tomorrow] = { 0 };
	printf("%d\n", tomorrow);

	//4. 枚举常量
	enum COLOR//不用在最前面定义。enum COLOR本质上和int一样是数据类型，COLOR本身也并不是变量。
	{
		red,
		blue,
		yellow
	};
	printf(" % d\n", red);
	printf(" % d\n", blue);
	printf(" % d\n", yellow);
	enum COLOR me = yellow;//这里的me才是变量，被枚举常量定义之后仍然可以变。
	me = 7;
	printf(" % d\n", me);

//二、字符串
	char curse1[] = "you son of a bitch";
	char curse2[] = { 'y','o','u',' ','s','o','n',' ','o','f',' ','a',' ','b','i','t','c','h','\0' };//'\0'是字符串结束的标志，或者直接写个0也是可以的，因为\0的ASCII表的十进制值就是0。
	char wrong[] = { 'a','b','c' };
	printf("%s\n", curse1);//%s打印字符串。
	printf("%s\n", curse2);
	printf("%d\n", strlen(curse1));
	printf("%d\n", strlen(wrong));//长度是随机值
	
//三、循环
	int coding = 0;
	printf("你会敲代码吗？");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("加油\n");
	}
	else
	{
		printf("回家吧\n");
	}
	//while循环
	int line = 0;
	while (line < 20000)
	{
		printf("敲一行代码：%d\n", line);
		line++;
	}
	if (line >= 2000)
	{
		printf("恭喜你成为资深码农。\n");
	}
	
//四、函数
	//1.自定义函数
	//2.库函数
	return 0;
}

 




//常量                      属性
// 
//字面常量						      常量
//const修饰的常变量				  变量
//#define定义的标识符常量		常量
//enum枚举常量					    常量
//
// 
// 
//转义字符		含义
// 
//\n			    换行
//\0			    结束字符串
//\t			    Tab
//\?			    保留?原来的样子
//\\			    保留\原来的样子
//\'			    保留'原来的样子
//\"			    保留"原来的样子
//\ddd			  ddd表示1~3个八进制数字，整体表示ASCII码值
//\xdd			  dd表示2个十六进制数字，整体表示ASCII码值
