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


int mainCFTVGBHJ() {
	char a[50];
	printf("������:\n");
	scanf("%[^\n]", a); //���뻻�м��Ž���
	printf("str:%s", a);

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

	return 0;
}

//�����ֵ�ÿ��λ�滻
int main12UHU() {
	int n,m=0,k,h;
	printf("������:\n");
	scanf("%d", &n);

	for ( k = 1; n !=0; k=k*10)
	{
		//��ȡn�ĸ�λ
		h = n % 10;
		int temp = 0;
		if (h % 2 == 0) {
			temp = 0;
		}
		else
		{
			temp = 1;
		}
		m += temp * k;

		n /= 10;
	}

	printf("%d", m);
	return 0;
}


int mainGY() {
	float a,b,c,d;
	printf("������:\n");
	scanf("%f %f %f %f", &a,&b,&c,&d);

	float total = 0.2 * a + 0.1 * b + 0.2 * c + 0.5 * d;

	printf("%.1f", total);
	return 0;
}

//����������ƽ��
int mainYFUYV() {
	int a, b, c, d;
	printf("������:\n");
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	int distance = pow((c - a), 2) + pow((d - b), 2);

	printf("%d", distance);
	return 0;
}


int mainYGU() {
	int a, b;
	printf("������:\n");
	scanf("%d %d", &a, &b);

	if (a>100)
	{
		a %= 100;
	}
	if (b > 100)
	{
		b %= 100;
	}
	int sum = a + b;
	if (sum >= 100)
	{
		sum %= 100;
	}

	printf("%d", sum);
	return 0;
}

int mainYUG() {
	int a;
	printf("������:\n");
	scanf("%d", &a);

	if (a >=140)
	{
		printf("%s", "Genius");
	}
	return 0;
}

int mainGUYU() {
	int a;
	printf("������:\n");
	
	while (~scanf("%d", &a))
	{
		if (a >= 60)
		{
			printf("%s\n", "Pass");
		}
		else
		{
			printf("%s\n", "Fail");
		}
	}

	return 0;
}

//�ж���ż��
int mainGYUB() {
	int a;
	printf("������:\n");

	while (~scanf("%d", &a))
	{
		if (a % 2 == 0)
		{
			printf("%s\n", "Even");
		}
		else
		{
			printf("%s\n", "Odd");
		}
	}

	return 0;
}

//�ж��Ƿ���Ԫ��
int mainYUFI() {
	char a;
	printf("������:\n");
	char v[] = "AaEeIiOoUu";

	while (~scanf("%s", &a))
	{
		for (int i = 0; i < strlen(v); i++)
		{
			if (a==v[i])
			{
				printf("%s\n", "Vowel");
				break;
			}

			if (i==strlen(v)-1)
			{
				printf("%s\n", "Consonant");
			}
		}
	}

	return 0;
}

int mainILBI() {
	int a, b, c;
	printf("������:\n");
	scanf("%d %d %d", &a, &b,&c);

	if (a>=b && a<=c)
	{
		printf("%s\n","true");
	}
	else
	{
		printf("%s\n", "false");
	}

	return 0;
}

//�ж�ƽ������
int mainUGU() {
	int a;
	printf("������:\n");
	scanf("%d", &a);

	int flag = a % 100 == 0 ? 1 : 0;
	if (flag)
	{
		flag = a % 400==0?1:0;
	}
	else
	{
		flag = a % 4 == 0 ? 1 : 0;
	}
	if (flag)
	{
		printf("%s\n", "true");
	}
	else
	{
		printf("%s\n", "false");
	}



	return 0;
}

//�Ƿ�����ĸ��������Сд��
int mainUIHI() {
	char a;
	printf("������:\n");
	while (~scanf("%c", &a))
	{

		if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		{
			printf("%c is an alphabet.\n", a);
		}
		else
		{
			printf("%c is not an alphabet.\n", a);
		}
		//��ջ�������\n
		getchar();
	} 

	return 0;
}


int mainGUUIGH() {
	int a;
	printf("������:\n");
	scanf("%d", &a);

	a = a % 100;
	a = a % 12;

	if (a >=3 && a <= 5)
	{
		printf("%s\n", "spring");
	}
	else if (a >= 6 && a <= 8)
	{
		printf("%s\n", "summer");
	}
	else if (a >= 9 && a <= 11)
	{
		printf("%s\n", "autumn");
	}
	else
	{
		printf("%s\n", "winter");
	}

	return 0;
}

int mainYGIVGV() {
	float a, b;
	scanf_s("%f %f", &a, &b);

	float bmi = a / pow(b,2);

	if (bmi >=18.5&& bmi <=23.9)
	{
		printf("%s","Normal");
	}
	else
	{
		printf("%s", "Abnormal");
	}

	return 0;
}

//�����ֵ
int mainIGU() {
	int arr[4] = {0};

	scanf("%d %d %d %d",arr+0, arr + 1, arr + 2, arr + 3);

	int max = arr[0];

	printf("����size��%d\n",sizeof(arr)/4);

	for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}

	printf("%d\n",max);

	return 0;
}


int mainHUI12() {
	int a;
	scanf("%d",&a);

	int arr[] = {2,3,7};
	int flag = 1;

	for (int i = 0; i < 3; i++)
	{
		if (a%arr[i]==0)
		{
			printf("%d ",arr[i]);
			flag = 0;
		}
		if (flag==1&&i==2)
		{
			printf("n");
		}
	}
}


int mainUUUGY() {
	int a;
	int positive = 0;
	int negative = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		if (a > 0)
		{
			positive += 1;
		}
		if (a<0)
		{
			negative += 1;
		}
	}

	printf("positive:%d\n",positive);
	printf("negative:%d\n", negative);
}


int mainYUUGU() {
	float pricce;
	int month;
	int day;
	int tickit;

	scanf("%f %d %d %d", &pricce,&month,&day,&tickit);

	if (month==day&& month== 12)
	{
		pricce *= 0.8;
		if (tickit)
		{
			pricce -= 50;
		}
	}
	else if (month == day && month == 11)
	{
		pricce *= 0.7;
		if (tickit)
		{
			pricce -= 50;
		}
	}

	pricce = pricce > 0 ? pricce : 0;

	printf("%.2f\n", pricce);
}




int mainUIGI() {
	float weight;
	char flag;

	scanf("%f %c", &weight,&flag);


	int price = weight< 1.0 ? 20 : (20+ ceil(weight-1));

	if (flag=='y')
	{
		price += 5;
	}

	printf("%d\n", price);

}


int mainBUI() {
	float price;

	scanf("%f", &price);

	if (price >=5000)
	{
		price *= 0.6;
	}
	else if (price>=2000)
	{
		price *= 0.7;
	}
	else if (price >= 500)
	{
		price *= 0.8;
	}
	else if (price >= 100)
	{
		price *= 0.9;
	}

	printf("%.1f\n", price);

}



int mainVYU121() {
	float distance;

	scanf("%f", &distance);

	float plan1 = distance / 1.0;
	float plan2 = distance / 10.0+10;

	printf("%s\n", plan1<plan2?"w":"v");

}


int mainGUYPO() {
	float x,y;
	float x1, y1;

	scanf("%f %f", &x,&y);
	scanf("%f %f", &x1, &y1);

	if (y1 - y == 1) {
		printf("u");
	}
	if (y1 - y == -1) {
		printf("d");
	}
	if (x1 - x == 1) {
		printf("r");
	}
	if (x1 - x == -1) {
		printf("l");
	}
	return 0;
}
