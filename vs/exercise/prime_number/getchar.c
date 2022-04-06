#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


/*
getchar()ÿ�λ�ȥ������ȥȡһ���ַ�
scanf�Ὣ�ռ��л��з�'\n'ǰ���ַ���ȫ��ȡ�������뵽��ַ��
*/

int mainGYUVY() {

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

//��̬�ڴ����
int mainHIU() {
	int n;
	float* array;
	printf("�����볤�ȣ�\n");
	scanf("%d", &n);
	array = (float*)calloc(n, sizeof(float));

	for (int i = 0; i < n; i++)
	{
		scanf("%f", &array[i]);
	}

	float max = array[0], min = array[0],avr=0;

	for (int i = 0; i < n; i++)
	{
		if (array[i]>max)
		{
			max = array[i];
		}
		if (array[i] < min)
		{
			min = array[i];
		}
		avr += array[i];
	}
	avr = avr / n;

	printf("%.2f %.2f %.2f",max,min,avr);
	//�ͷŵ�һάָ�� 
	free(array);
	return 0;
}


//�����������
int mainYJGU()
{
	float a, b, c;
	printf("������:\n");
	scanf("%f %f %f", &a, &b, &c);

	//���׹�ʽ:p=(a+b+c)/2��S=sqrt[p(p-a)(p-b)(p-c)]
	float p = (a + b + c) / 2;
	float S = sqrt(p*(p-a)*(p-b)*(p-c));


	printf("circumference=%.2f area=%.2f", (a+ b+ c),(S));
	

	return 0;
}


int mainGUI()
{
	float h, m;
	int n;
	printf("������:\n");
	scanf("%d %f %f", &n, &h, &m);

	int residue = n - ceil(m / h);

	printf("%d", residue);

	return 0;
}


//С�������������
int mainDSDS() {
	double n;
	printf("�����뻪���¶�:\n");
	scanf("%lf", &n);

	//�����¶�
	double c = 5.0 / 9.0*(n - 32);
	printf("%.3lf", c);
	return 0;
}


int mainUHUI() {
	float r;
	printf("������:\n");
	scanf("%f", &r);
	float  S =3.14*r*r;
	printf("%.2f", S);
	return 0;
}

int mainYUV()
{
	float r1, r2;
	printf("������:\n");
	scanf("%f %f", &r1, &r2);

	double resistance = 1.0 / ((1.0/r1)+(1.0/r2));

	printf("%.1lf", resistance);

	return 0;
}

int mainYGYU()
{
	float h, r;
	printf("������:\n");
	scanf("%f %f", &h, &r);

	double V = 3.14 * h * r * r;
	int cups = ceil( 1000.0 * 10 / V);

	printf("%d", cups);

	return 0;
}

/*
�Ȳ�����:
an=am+(n-m)d����nΪ��������
*/
int mainGTVUG()
{
	int a1, a2;
	printf("������:\n");
	scanf("%d %d", &a1, &a2);

	int a3 = a1 + (3 - 1)*(a2 - a1);

	printf("%d", a3);

	return 0;
}


int mainBYG() {
	float r;
	printf("������:\n");
	scanf("%f", &r);
	float  V = 3.14 * r * r*r*4.0/3.0;
	printf("%.2f", V);
	return 0;
}

//��������
int mainGYUu()
{
	int h, m, nowM;
	printf("������:\n");
	scanf("%d:%d %d", &h, &m,&nowM);

	int allM = (nowM + h * 60 + m);
	int useH = (nowM + h * 60 + m) / 60;
	int pH = useH % 24;
	int pM = (allM - useH*60) % 60;
	printf("%02d:%02d", pH, pM);

	return 0;
}

//BC43���µ���
int mainGUYF() {
	int n;
	printf("�������Ŷ�����:\n");
	scanf("%d", &n);
	
	int time1 = (n / 12) * 4;
	int times = time1 + ( ((n+1)- time1/4*12)==0?0:2 );

	printf("%d", times);
	return 0;
}


//���Լ������С������
int mainYGUF() {
	long long a, b, m, n, c;
	scanf("%lld %lld", &a, &b);
	c = a * b;
	while (a && b) {
		if (a > b) a %= b;
		else b %= a;
	}
	m = a > b ? a : b;
	n = c / m;
	printf("��С��������%lld ���Լ����%lld", n,m);
}