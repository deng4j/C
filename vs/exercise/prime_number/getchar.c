#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


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