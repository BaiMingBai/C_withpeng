#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

struct person //�ṹ��
{
	char name[20];
	char gender[10];
	int age;
};
int main() {
	struct person Claire = { "����","Ů",22 };
	printf("������%s\n", Claire.name);
	printf("�Ա�%s\n", Claire.gender);
	printf("���䣺%d\n", Claire.age);
	Claire.age = 23;
	printf("�µ����䣺%d\n", Claire.age);

	struct person* wz = &Claire;
	printf("ͨ��λ���ҵ����֣�%s\n", (*wz).name);
	printf("ͨ��λ���ҵ��Ա�%s\n", (*wz).gender);
	printf("ͨ��λ���ҵ����䣺%d\n", (*wz).age);

	printf("ͨ����һ��λ���ҵ����֣�%s\n", wz->name);
	printf("ͨ����һ��λ���ҵ��Ա�%s\n", wz->gender);
	printf("ͨ����һ��λ���ҵ����䣺%d\n", wz->age);
	return 0;
}