#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


/*
getchar()每次会去缓冲区去取一个字符
scanf会将空间中换行符'\n'前的字符串全部取出，存入到地址中
*/

int mainGYUVY() {

	int ch = 0;
	int temp = 0;
	//ctrl+z停止输入
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
			printf("请输入字母\n");
			continue;
		}

		printf("%c\n", temp);
		getchar(); //用于清理输入的换行符'\n'
	}

	return 0;
}


int mainCFTVGBHJ() {
	char a[50];
	printf("请输入:\n");
	scanf("%[^\n]", a); //输入换行键才结束
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
	printf("请输入:\n");
	scanf("%d %d %d", &a,&b,&c);
	if (check(a)&&check(b)&&check(c))
	{
		printf("score1=%d,score2=%d,score3=%d", a, b, c);
	}
	
	return 0;
}


//除法+取模，获取数字
int mainGUUGHIU() {
	int a;
	printf("请输入:\n");
	scanf("%d", &a);

	int y = a / 10000;
	int m = (a / 100) % 100;
	int d = a % 100;

	printf("year=%04d\n month=%02d\n day=%02d\n", y,m,d);

	return 0;
}

int mainIUK() {
	int a;
	printf("请输入:\n");
	scanf("%d", &a);

	printf("%d", (a%100)/10);
	return 0;
}

//使用异或交换数据
int mainGBHJ() {
	int a,b;
	printf("请输入:\n");
	scanf("a=%d,b=%d", &a,&b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a=%d,b=%d", a,b);

	return 0;
}

//空格
int mainJOIJ() {
	int a, b,c;
	printf("请输入:\n");
	scanf("%d %d %d", &a, &b, &c);

	printf("%d%8d%8d", a, b, c);
	return 0;
}


//进制相加
int mainHHIU() {
	int a, b,c;
	printf("请输入:\n");
	scanf("%x %o", &a, &b);
	c = a + b;
	printf("%d", c);
	return 0;
}


int mainBHK() {
	float a;
	int b;
	printf("请输入:\n");
	scanf("%f", &a);
	b = (int)a % 10;
	
	printf("%d", b);
	return 0;
}


int mainHIIK() {
	int a, b;
	printf("请输入:\n");
	scanf("%d %d", &a,&b);

	printf("%d %d", (a/b),(a%b) );
	return 0;
}


int mainUGYU() {
	int a, b;
	printf("请输入:\n");
	scanf("%d %d", &a, &b);
	b = (a + b) % 7;
	a =b ==0?7:b;

	printf("%d", a);
	return 0;
}

//计算时分秒
int mainHUI() {
	int a,b,c;
	printf("请输入:\n");
	scanf("%d", &a);
	b = a / 3600;
	a = a - (b * 3600);
	c = a / 60;
	a = a - (c * 60);

	printf("%d %d %d", b,c,a);
	return 0;
}


//位运算
int mainGUY() {
	int n;
	printf("请输入:\n");
	scanf("%d", &n);

	printf("%d", (1 <<n));
	return 0;
}

//次方运算
int mainHUJJJI() {
	int age;
	printf("请输入:\n");
	scanf("%d", &age);

	long seconds = 3.156 *pow(10,7) * age;

	printf("%ld",seconds );
	return 0;
}

//动态内存分配
int mainHIU() {
	int n;
	float* array;
	printf("请输入长度：\n");
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
	//释放第一维指针 
	free(array);
	return 0;
}


//求三角形面积
int mainYJGU()
{
	float a, b, c;
	printf("请输入:\n");
	scanf("%f %f %f", &a, &b, &c);

	//海伦公式:p=(a+b+c)/2，S=sqrt[p(p-a)(p-b)(p-c)]
	float p = (a + b + c) / 2;
	float S = sqrt(p*(p-a)*(p-b)*(p-c));


	printf("circumference=%.2f area=%.2f", (a+ b+ c),(S));
	

	return 0;
}


int mainGUI()
{
	float h, m;
	int n;
	printf("请输入:\n");
	scanf("%d %f %f", &n, &h, &m);

	int residue = n - ceil(m / h);

	printf("%d", residue);

	return 0;
}


//小数点后四舍五入
int mainDSDS() {
	double n;
	printf("请输入华氏温度:\n");
	scanf("%lf", &n);

	//摄氏温度
	double c = 5.0 / 9.0*(n - 32);
	printf("%.3lf", c);
	return 0;
}


int mainUHUI() {
	float r;
	printf("请输入:\n");
	scanf("%f", &r);
	float  S =3.14*r*r;
	printf("%.2f", S);
	return 0;
}

int mainYUV()
{
	float r1, r2;
	printf("请输入:\n");
	scanf("%f %f", &r1, &r2);

	double resistance = 1.0 / ((1.0/r1)+(1.0/r2));

	printf("%.1lf", resistance);

	return 0;
}

int mainYGYU()
{
	float h, r;
	printf("请输入:\n");
	scanf("%f %f", &h, &r);

	double V = 3.14 * h * r * r;
	int cups = ceil( 1000.0 * 10 / V);

	printf("%d", cups);

	return 0;
}

/*
等差数列:
an=am+(n-m)d，（n为正整数）
*/
int mainGTVUG()
{
	int a1, a2;
	printf("请输入:\n");
	scanf("%d %d", &a1, &a2);

	int a3 = a1 + (3 - 1)*(a2 - a1);

	printf("%d", a3);

	return 0;
}


int mainBYG() {
	float r;
	printf("请输入:\n");
	scanf("%f", &r);
	float  V = 3.14 * r * r*r*4.0/3.0;
	printf("%.2f", V);
	return 0;
}

//设置闹钟
int mainGYUu()
{
	int h, m, nowM;
	printf("请输入:\n");
	scanf("%d:%d %d", &h, &m,&nowM);

	int allM = (nowM + h * 60 + m);
	int useH = (nowM + h * 60 + m) / 60;
	int pH = useH % 24;
	int pM = (allM - useH*60) % 60;
	printf("%02d:%02d", pH, pM);

	return 0;
}

//BC43上下电梯
int mainGUYF() {
	int n;
	printf("请输入排队人数:\n");
	scanf("%d", &n);
	
	int time1 = (n / 12) * 4;
	int times = time1 + ( ((n+1)- time1/4*12)==0?0:2 );

	printf("%d", times);
	return 0;
}


//最大公约数与最小公倍数
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
	printf("最小公倍数：%lld 最大公约数：%lld", n,m);

	return 0;
}

//将数字的每个位替换
int main12UHU() {
	int n,m=0,k,h;
	printf("请输入:\n");
	scanf("%d", &n);

	for ( k = 1; n !=0; k=k*10)
	{
		//获取n的个位
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
	printf("请输入:\n");
	scanf("%f %f %f %f", &a,&b,&c,&d);

	float total = 0.2 * a + 0.1 * b + 0.2 * c + 0.5 * d;

	printf("%.1f", total);
	return 0;
}

//求两点距离的平方
int mainYFUYV() {
	int a, b, c, d;
	printf("请输入:\n");
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	int distance = pow((c - a), 2) + pow((d - b), 2);

	printf("%d", distance);
	return 0;
}


int mainYGU() {
	int a, b;
	printf("请输入:\n");
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
	printf("请输入:\n");
	scanf("%d", &a);

	if (a >=140)
	{
		printf("%s", "Genius");
	}
	return 0;
}

int mainGUYU() {
	int a;
	printf("请输入:\n");
	
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

//判断奇偶数
int mainGYUB() {
	int a;
	printf("请输入:\n");

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

//判断是否是元音
int mainYUFI() {
	char a;
	printf("请输入:\n");
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
	printf("请输入:\n");
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

//判断平年闰年
int mainUGU() {
	int a;
	printf("请输入:\n");
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

//是否是字母（包括大小写）
int mainUIHI() {
	char a;
	printf("请输入:\n");
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
		//清空缓冲区的\n
		getchar();
	} 

	return 0;
}


int mainGUUIGH() {
	int a;
	printf("请输入:\n");
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

//求最大值
int mainIGU() {
	int arr[4] = {0};

	scanf("%d %d %d %d",arr+0, arr + 1, arr + 2, arr + 3);

	int max = arr[0];

	printf("数组size：%d\n",sizeof(arr)/4);

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


int mainBJHB12() {
	int status;

	while (~scanf("%d", &status))
	{

		switch (status)
		{
		case 200:
			printf("%s\n", "OK");
			break;
		case 202:
			printf("%s\n", "Accepted");
			break;
		case 400:
			printf("%s\n", "Bad Request");
			break;
		case 403:
			printf("%s\n", "Forbidden");
			break;
		case 404:
			printf("%s\n", "Not Found");
			break;
		case 500:
			printf("%s\n", "Internal Server Error");
			break;
		case 502:
			printf("%s\n", "Bad Gateway");
		default:
			break;
		}
	}

	return 0;

}



int mainGUYUNM12() {
	float price;

	while (~scanf("%f", &price))
	{

		if (price >0)
		{

			printf("%d\n", 1);
		}
		else if (price ==0)
		{
			printf("%.1f\n", 0.5);
		}
		else if (price < 0)
		{
			printf("%d\n", 0);
		}
	}

	return 0;
}



int mainGKJK12() {
	float a,b,c;

	while (~scanf("%f %f %f", &a,&b,&c))
	{
		if ((a+b)>c&&(a+c)>b&&(b+c)>a)
		{
			if (a==b&&a==c)
			{
				printf("%s\n", "Equilateral triangle!");
			}
			else if (a==b||a==c||b==c)
			{
				printf("%s\n", "Isosceles triangle!");
			}
			else
			{
				printf("%s\n", "Ordinary triangle!");
			}
		}
		else
		{
			printf("%s\n", "Not a triangle!");
		}
	}

	return 0;
}





int mainHUK12() {
	int a, b, c;
	int d, e, f;

	scanf("%d %d %d", &a, &b, &c);
	int startDay = a * 365 + b * 30 + c;

	while (~scanf("%d %d %d", &d, &e, &f))
	{
		int nowDay = d * 365 + e * 30 + f;

		if (nowDay>=startDay)
		{
			printf("%s\n", "yes");
		}
		else
		{
			printf("%s\n", "no");
		}
			
	}

	return 0;
}



//一元二次方程求解
int mainGUJG() {
	float a, b, c;

	while (~scanf("%f %f %f", &a, &b, &c))
	{
		if (a!=0)
		{
			float result = b * b - 4 * a * c;
			float ans1,ans2;
			if (result==0)
			{
				ans1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a)+0.00;
				printf("x1=x2=%.2f\n", ans1);
			}
			else if (result>0)
			{
				ans1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
				ans2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
				printf("x1=%.2f;x2=%.2f\n", ans1, ans2);
			}
			else
			{
				ans1 =-b / (2 * a);
				ans2 = sqrt(-result) / (2 * a);
				if (ans2<0)
				{
					ans2 = -ans2;
				}
				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", ans1, ans2, ans1, ans2);
			}
		}
		else
		{
			printf("%s\n", "Not quadratic equation");
		}
	}

	return 0;
}


//计算某年的某月总共有多少天
int mainHUI121() {
	int a, b;

	while (~scanf("%d %d", &a, &b))
	{

		int flag = 0;
		int max;
		if (a%4==0)
		{
			flag = 1;
			if (a%100==0&&a%400!=0)
			{
				flag = 0;
			}
		}

		if (b <= 7)
		{
			if (b % 2 != 0)
			{
				max = 31;
			}
			else
			{
				max = 30;
			}

		}
		else
		{
			if (b % 2 != 0)
			{
				max = 30;
			}
			else
			{
				max = 31;
			}
		}

		if (b==2)
		{
			if (flag)
			{
				max = 29;
			}
			else
			{
				max = 28;
			}
		}

		printf("%d\n", max);
	}

	return 0;
}



int mainHUK78() {
	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);
	float avr = (a+b+c)/3;

	if (avr>=60)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}

	return 0;
}


//ISBN号码
int mainH45() {
	int a, b, c,d;

	scanf("%d-%d-%d-%c", &a, &b, &c,&d);
	int start = c+b*100000+a*100000000;
	
	int code;
	int sum=0;
	for (int i = 9; i >0 ; i--)
	{
		int jk = start % 10;
		start /= 10;
		sum += jk * i;
	}
	code = sum % 11;

	if (code ==10)
	{
		if ('X' ==(char) d)
		{
			printf("%s\n", "Right");
		}
		else
		{
			printf("%d-%d-%d-X\n", a, b, c);
		}
	}
	else
	{
		if (code== (char)d-'0')
		{
			printf("%s\n", "Right");
		}
		else
		{
			printf("%d-%d-%d-%d\n", a, b, c, code);
		}
		
	}

	return 0;
}

int mainUUHI454() {
	char a = '4';
	int b = a - '0';
	printf("%d",b);
	return 0;
}