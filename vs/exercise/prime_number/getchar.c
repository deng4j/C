#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include "getchar.h"


/*
getchar()ÿ�λ�ȥ������ȥȡһ���ַ�
scanf�Ὣ�ռ��л��з�'\n'ǰ���ַ���ȫ��ȡ�������뵽��ַ��
*/

int mainFGVH() {

	int ch = 0;
	int temp = 0;
	while ((ch=getchar()) !=EOF)
	{
		if (ch>=97 && ch<=122)
		{
			temp = ch - 32;
		}
		else if (ch >= 65 && ch <= 90)
		{
			temp = ch + 32;
		}
		else
		{
			printf("��������ĸ\n");
			continue;
		}

		printf("%c\n", temp);
		getchar(); //������������Ļ��з�'\n'
	}

	return 0;
}


int mainTFYH() {
	char x;
	int y;
	double z;
	scanf_s("%c", &x);
	scanf_s("%d",&y);
	scanf_s("%lf",&z);

	printf("%c %d %.6lf", x, y, z);
	return 0;
}


int check(int n) {
	if (n>=0&&n<=100)
	{
		return 1;
	}
	return 0;
}
int mainGHJG()
{
	int a, b, c;
	printf("������:\n");
	scanf("%d %d %d", &a,&b,&c);
	if (check(a)&&check(b)&&check(c))
	{
		printf("score1=%d,score2=%d,score3=%d", a, b, c);
	}
	
	return 0;
}


int mainCFTVGBHJ() {
	char a[50];
	printf("������:\n");
	scanf("%[^\n]", a); //���뻻�м��Ž���
	printf("str:%s",a);
}

//����+ȡģ����ȡ����
int mainGUUGHIU() {
	int a;
	printf("������:\n");
	scanf("%d", &a);

	int y = a / 10000;
	int m = (a / 100) % 100;
	int d = a % 100;

	printf("year=%04d\n month=%02d\n day=%02d\n", y,m,d);

	return 0;
}

int mainIUK() {
	int a;
	printf("������:\n");
	scanf("%d", &a);

	printf("%d", (a%100)/10);
	return 0;
}

//ʹ����򽻻�����
int mainGBHJ() {
	int a,b;
	printf("������:\n");
	scanf("a=%d,b=%d", &a,&b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a=%d,b=%d", a,b);

	return 0;
}

//�ո�
int mainJOIJ() {
	int a, b,c;
	printf("������:\n");
	scanf("%d %d %d", &a, &b, &c);

	printf("%d%8d%8d", a, b, c);
	return 0;
}


//�������
int mainHHIU() {
	int a, b,c;
	printf("������:\n");
	scanf("%x %o", &a, &b);
	c = a + b;
	printf("%d", c);
	return 0;
}


int mainBHK() {
	float a;
	int b;
	printf("������:\n");
	scanf("%f", &a);
	b = (int)a % 10;
	
	printf("%d", b);
	return 0;
}


int mainHIIK() {
	int a, b;
	printf("������:\n");
	scanf("%d %d", &a,&b);

	printf("%d %d", (a/b),(a%b) );
	return 0;
}


int mainUGYU() {
	int a, b;
	printf("������:\n");
	scanf("%d %d", &a, &b);
	b = (a + b) % 7;
	a =b ==0?7:b;

	printf("%d", a);
	return 0;
}

//����ʱ����
int mainHUI() {
	int a,b,c;
	printf("������:\n");
	scanf("%d", &a);
	b = a / 3600;
	a = a - (b * 3600);
	c = a / 60;
	a = a - (c * 60);

	printf("%d %d %d", b,c,a);
	return 0;
}


//λ����
int mainGUY() {
	int n;
	printf("������:\n");
	scanf("%d", &n);

	printf("%d", (1 <<n));
	return 0;
}

//�η�����
int mainHUJJJI() {
	int age;
	printf("������:\n");
	scanf("%d", &age);

	long seconds = 3.156 *pow(10,7) * age;

	printf("%ld",seconds );
	return 0;
}


int main() {
	int n=0;
	printf("���������ݸ���:\n");
	scanf("%d", &n);
	//int arr[n];
	for (int i = 0; i < n; i++)
	{

	}

	printf("%d", n);
	return 0;
}

