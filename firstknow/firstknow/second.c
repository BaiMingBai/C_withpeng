//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <string.h>
//int main()
//{
//	int number = 0;
////һ������
//#define tomorrow 331//defien�����б����Ķ���һ��Ҫ�ڵ�ǰ��������ǰ�档
//	//1. ���泣��
//	// 
//	//2. const���εĳ�����
//	const int cbl = 188;//const��ʾ�����ԡ���ʱcbl�Ǳ����εĳ��������Ǳ������Ǿ��г����ԣ����ܱ䡣
//	printf("%d\n", cbl);
//
//	//3. define����ı�ʶ������
//	int arr[tomorrow] = { 0 };
//	printf("%d\n", tomorrow);
//
//	//4. ö�ٳ���
//	enum COLOR//��������ǰ�涨�塣enum COLOR�����Ϻ�intһ�����������ͣ�COLOR����Ҳ�����Ǳ�����
//	{
//		red,
//		blue,
//		yellow
//	};
//	printf(" % d\n", red);
//	printf(" % d\n", blue);
//	printf(" % d\n", yellow);
//	enum COLOR me = yellow;//�����me���Ǳ�������ö�ٳ�������֮����Ȼ���Ա䡣
//	me = 7;
//	printf(" % d\n", me);
//
////�����ַ���
//	char curse1[] = "you son of a bitch";
//	char curse2[] = { 'y','o','u',' ','s','o','n',' ','o','f',' ','a',' ','b','i','t','c','h','\0' };//'\0'���ַ��������ı�־������ֱ��д��0Ҳ�ǿ��Եģ���Ϊ\0��ASCII���ʮ����ֵ����0��
//	char wrong[] = { 'a','b','c' };
//	printf("%s\n", curse1);//%s��ӡ�ַ�����
//	printf("%s\n", curse2);
//	printf("%d\n", strlen(curse1));
//	printf("%d\n", strlen(wrong));//���������ֵ
//	
////����ѭ��
//	int coding = 0;
//	printf("����ô�����");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("�ؼҰ�\n");
//	}
//	//whileѭ��
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("��һ�д��룺%d\n", line);
//		line++;
//	}
//	if (line >= 2000)
//	{
//		printf("��ϲ���Ϊ������ũ��\n");
//	}
//	
////�ġ�����
//	//1.�Զ��庯��
//	//2.�⺯��
//	return 0;
//}
//
// 
//
//
//
//
////����							����
//// 
////���泣��						����
////const���εĳ�����				����
////#define����ı�ʶ������		����
////enumö�ٳ���					����
////
//// 
//// 
////ת���ַ�		����
//// 
////\n			����
////\0			�����ַ���
////\t			Tab
////\?			����?ԭ��������
////\\			����\ԭ��������
////\'			����'ԭ��������
////\"			����"ԭ��������
////\ddd			ddd��ʾ1~3���˽������֣������ʾASCII��ֵ
////\xdd			dd��ʾ2��ʮ���������֣������ʾASCII��ֵ
////
////