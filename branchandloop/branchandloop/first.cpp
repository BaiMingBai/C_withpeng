#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
#include<string.h>;
#include<windows.h>;
#include<stdlib.h>;
int main() {
////一、分支语句
////(1)if语句
//	int age = 0;
//	printf("请输入年龄：");
//	scanf("%d", &age);
//	if (age >= 18 && age<30)
//		printf("青年\n");//只有一行语句的时候可以不用{}；但是要执行多行语句的时候要用{}。
//	else if (age >= 30 && age < 60)
//		printf("中年\n");
//	else if (age >= 60 && age < 120)
//		printf("老年\n");
//	else if (age >= 120)
//		printf("成精了\n");
//	else//else和它最近的一个未匹配的if匹配，和缩进无关。
//		printf("未成年\n");
//
//	//练习1：判断一个数是否为奇数。
//	int number = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &number);
//	if (number % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//	//练习2：输出1-100之间的奇数
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}


////(2) switch语句
//	int day = 0;//switch的变量必须是整型。
//	scanf("%d", &day);
//	switch (day) {
//	case 1://case后面的数字必须是一个整型常量
//		printf("Monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	default:
//		printf("-_-||");
//	}
//
//	switch (day) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("Weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("Weekend\n");
//		break;
//	default:
//		printf("你家日历上有星期%d啊\n", day);
//		break;
//	}

////二、循环语句
////(3) while循环
////	例1：
//	int n = 0;
//	while (n <= 10) {
//		if (6 == n)
//			break;
//		n++;
//		if (3 == n)
//			continue;//continue的意思是要从这儿跳到while最开始。这里就是跳过了3这个数字。
//		printf("%d", n);
//
//		}
//
////	例2：
//	char password[20] = { 0 };
//	int res = 0;
//	printf("请输入密码：");
//	scanf("%s", password);
//	int tb = 0;
//	while (tb != '\n') {
//		tb = getchar();
//	}//拿走缓冲区里的/n确保后面的getchar()
//	printf("请确认（Y/N）：");
//	res = getchar();
//	if (res == 'Y')
//		printf("确认成功\n");
//	else if (res == 'N')
//		printf("取消确认\n");
//	else
//		printf("错误值\n");

////(4)for循环
	//int i = 0;
	//for (i = 1;i <= 10;i++) {
	//	if (3 == i)
	//		continue;//这里不会死循环，因为从这儿出去之后质性第三个表达式。
	//	printf("%d\n", i);
	//	if (6 == i)
	//		break;
	//}

////(5)do...while()循环
		
//int d = 1;
//do {
//	if (5 == d)
//		continue;//这里也是死循环。
//	printf("%d\n", d);
//	d++;
//	if(d==6)
//		break;
//} 
//while (d <= 10);

////练习1：计算n的阶乘。
//int n = 0;
//int r = 1;
//int a = 1;
//printf("请输入要算的阶乘：");
//scanf("%d", &n);
//for (r = 1;r <= n;r++) {
//	a=r*a;
//}
//printf("%d", a);

////练习2：计算1！+2！+...+10!
////第一种方法（比较冗杂）
//int tten = 1;
//int zans = 0;
//printf("计算结果：");
//for (tten = 1;tten <= 10;tten++) {
//	int ans = 1;
//	int each = 1;
//	for (each = 1;each <= tten;each++) {
//		ans = each * ans;
//	}
//	zans = zans + ans;
//}
//printf("%d\n", zans);
//
////第二种方法（简洁高效）
//int n = 1;
//int ret = 1;
//int sum = 0;
//for (n = 1;n <= 10;n++) {
//	ret = ret * n;
//	sum = sum + ret;
//}
//printf("结果是：%d\n", sum);

////练习3：在一个有序数组中查找具体的某个数字n。编写int binsearch(int x,int v[],int n);功能：在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x。
////第一种方法：低效
//char shuzu[] = {1,2,3,4,5,6,7,8,9};
//int k = 0;
//int i = 0;
//int size = sizeof(shuzu) / sizeof(shuzu[0]);
//scanf("%d", &k);
//for (i = 0;i <= size;i++) {
//	if (k == shuzu[i]) {
//		printf("找到了，下标是%d\n", i);
//		break;
//	}
//	else if (i == size) {
//		printf("没找到\n");
//		break;
//	}
//}

////第二种方法：高效
//char shuzu[] = { 1,2,3,4,5,6,7,8,9 };
//int k = 0;
//int size = sizeof(shuzu) / sizeof(shuzu[0]);
//int left = 0;
//int right = size - 1;
//int mid = 0;
//scanf("%d", &k);
//for (;left<=right;) {
//	mid=(left+right)/2;
//	if (shuzu[mid] < k) {
//		right=mid-1;
//	}
//	else if (shuzu[mid] > k) {
//		left=mid+1;
//	}
//	else {
//		printf("找到了，下标是%d", mid);
//		break;
//	}	
//}
//if (left > right) {
//	printf("没找到\n");
//}


////练习4：编写代码，演示多个字符从两端移动，向中间汇聚。
//char mtcl[] = ("aberration");
//char ts[] = ("##########");
//int i = 0;
//int sz = sizeof(mtcl);
//for (i = 0;i<=sz/2;i++) {
//	Sleep(500);//Sleep()函数，前面包含了windows.h
//	ts[i] = mtcl[i];
//	ts[sz-i-2] = mtcl[sz-i-2];
//	system("cls");//system是执行系统命令的一个函数，前面包含了stdlib,h；cls表示清空屏幕。
//	printf("%s\n", ts);
//}





////练习5：编写代码实现模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序。）
//
//char password[20] = {0};
//char right[] = "123456";
//int i = 1;
//for (i = 1; i <= 3; i++) {
//	printf("请输入密码：");
//	scanf("%s", password);
//	if (strcmp(right, password) == 0) {
//		printf("密码正确登录成功。\n");
//		break;
//	}
//	else
//		printf("密码错误。\n");
//}
//if (i == 4) {
//	printf("连续三次密码输入错误，退出登录.\n");
//}








	return 0;
}
