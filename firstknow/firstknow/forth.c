#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

struct person //结构体
{
	char name[20];
	char gender[10];
	int age;
};
int main() {
	struct person Claire = { "白昀","女",22 };
	printf("姓名：%s\n", Claire.name);
	printf("性别：%s\n", Claire.gender);
	printf("年龄：%d\n", Claire.age);
	Claire.age = 23;
	printf("新的年龄：%d\n", Claire.age);

	struct person* wz = &Claire;
	printf("通过位置找的名字：%s\n", (*wz).name);
	printf("通过位置找的性别：%s\n", (*wz).gender);
	printf("通过位置找的年龄：%d\n", (*wz).age);

	printf("通过另一种位置找的名字：%s\n", wz->name);
	printf("通过另一种位置找的性别：%s\n", wz->gender);
	printf("通过另一种位置找的年龄：%d\n", wz->age);
	return 0;
}