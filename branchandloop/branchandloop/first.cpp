#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
#include<string.h>;
#include<windows.h>;
#include<stdlib.h>;
int main() {
////һ����֧���
////(1)if���
//	int age = 0;
//	printf("���������䣺");
//	scanf("%d", &age);
//	if (age >= 18 && age<30)
//		printf("����\n");//ֻ��һ������ʱ����Բ���{}������Ҫִ�ж�������ʱ��Ҫ��{}��
//	else if (age >= 30 && age < 60)
//		printf("����\n");
//	else if (age >= 60 && age < 120)
//		printf("����\n");
//	else if (age >= 120)
//		printf("�ɾ���\n");
//	else//else���������һ��δƥ���ifƥ�䣬�������޹ء�
//		printf("δ����\n");
//
//	//��ϰ1���ж�һ�����Ƿ�Ϊ������
//	int number = 0;
//	printf("������һ�����֣�");
//	scanf("%d", &number);
//	if (number % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//
//	//��ϰ2�����1-100֮�������
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}


////(2) switch���
//	int day = 0;//switch�ı������������͡�
//	scanf("%d", &day);
//	switch (day) {
//	case 1://case��������ֱ�����һ�����ͳ���
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
//		printf("���������������%d��\n", day);
//		break;
//	}

////����ѭ�����
////(3) whileѭ��
////	��1��
//	int n = 0;
//	while (n <= 10) {
//		if (6 == n)
//			break;
//		n++;
//		if (3 == n)
//			continue;//continue����˼��Ҫ���������while�ʼ���������������3������֡�
//		printf("%d", n);
//
//		}
//
////	��2��
//	char password[20] = { 0 };
//	int res = 0;
//	printf("���������룺");
//	scanf("%s", password);
//	int tb = 0;
//	while (tb != '\n') {
//		tb = getchar();
//	}//���߻��������/nȷ�������getchar()
//	printf("��ȷ�ϣ�Y/N����");
//	res = getchar();
//	if (res == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else if (res == 'N')
//		printf("ȡ��ȷ��\n");
//	else
//		printf("����ֵ\n");

////(4)forѭ��
	//int i = 0;
	//for (i = 1;i <= 10;i++) {
	//	if (3 == i)
	//		continue;//���ﲻ����ѭ������Ϊ�������ȥ֮�����Ե��������ʽ��
	//	printf("%d\n", i);
	//	if (6 == i)
	//		break;
	//}

////(5)do...while()ѭ��
		
//int d = 1;
//do {
//	if (5 == d)
//		continue;//����Ҳ����ѭ����
//	printf("%d\n", d);
//	d++;
//	if(d==6)
//		break;
//} 
//while (d <= 10);

////��ϰ1������n�Ľ׳ˡ�
//int n = 0;
//int r = 1;
//int a = 1;
//printf("������Ҫ��Ľ׳ˣ�");
//scanf("%d", &n);
//for (r = 1;r <= n;r++) {
//	a=r*a;
//}
//printf("%d", a);

////��ϰ2������1��+2��+...+10!
////��һ�ַ������Ƚ����ӣ�
//int tten = 1;
//int zans = 0;
//printf("��������");
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
////�ڶ��ַ���������Ч��
//int n = 1;
//int ret = 1;
//int sum = 0;
//for (n = 1;n <= 10;n++) {
//	ret = ret * n;
//	sum = sum + ret;
//}
//printf("����ǣ�%d\n", sum);

////��ϰ3����һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int v[],int n);���ܣ���v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x��
////��һ�ַ�������Ч
//char shuzu[] = {1,2,3,4,5,6,7,8,9};
//int k = 0;
//int i = 0;
//int size = sizeof(shuzu) / sizeof(shuzu[0]);
//scanf("%d", &k);
//for (i = 0;i <= size;i++) {
//	if (k == shuzu[i]) {
//		printf("�ҵ��ˣ��±���%d\n", i);
//		break;
//	}
//	else if (i == size) {
//		printf("û�ҵ�\n");
//		break;
//	}
//}

////�ڶ��ַ�������Ч
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
//		printf("�ҵ��ˣ��±���%d", mid);
//		break;
//	}	
//}
//if (left > right) {
//	printf("û�ҵ�\n");
//}


////��ϰ4����д���룬��ʾ����ַ��������ƶ������м��ۡ�
//char mtcl[] = ("aberration");
//char ts[] = ("##########");
//int i = 0;
//int sz = sizeof(mtcl);
//for (i = 0;i<=sz/2;i++) {
//	Sleep(500);//Sleep()������ǰ�������windows.h
//	ts[i] = mtcl[i];
//	ts[sz-i-2] = mtcl[sz-i-2];
//	system("cls");//system��ִ��ϵͳ�����һ��������ǰ�������stdlib,h��cls��ʾ�����Ļ��
//	printf("%s\n", ts);
//}





////��ϰ5����д����ʵ��ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳����򡣣�
//
//char password[20] = {0};
//char right[] = "123456";
//int i = 1;
//for (i = 1; i <= 3; i++) {
//	printf("���������룺");
//	scanf("%s", password);
//	if (strcmp(right, password) == 0) {
//		printf("������ȷ��¼�ɹ���\n");
//		break;
//	}
//	else
//		printf("�������\n");
//}
//if (i == 4) {
//	printf("��������������������˳���¼.\n");
//}








	return 0;
}
