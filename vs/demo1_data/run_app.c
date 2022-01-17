#include<stdio.h>
#include<string.h>
/*
.sln是项目文件，选择它打开项目。不是打开.c文件。
.exe是可执行程序，可以选择release发型版生成后发送给朋友运行，老电脑应该运行32位X86的。
*/


/*
64位编译器数据类型:
char //字符数据型 1
short //短整型 2
int //整型 4
long //长整型 4
long long //更长的整型 8
float //单精度浮点型 4
double //双精度浮点型 8
long double //长双精度浮点型 8
unsigned int 无符号整形，可以做Boolean值 4

一个中文占两个字节

%的输出：
1.%d有符号10进制整数
2.%c单个字符
3.%f：以实型输出
4.%s字符串
5.%u无符号10进制整数
6.%p  打印地址形式
7.%04x 以16进制输出4位
8.%[]：读入此集合内所限定的字符,一旦遇到不是此集合内的字符就停止。
9.%[^]：^表示非,那么就是，一旦遇到集合中的值就停止。
例如：char a[50];
	 scanf("%[^\n]",a);

print_bin_simple(number); //去掉前面无效0二进制数格式输出

sizeof:求所占空间大小
strlen：求字符串长度

数组：
数组创建时的长度必须是一个常量
*/


int main() {

	char var = 'A';
	short var1 = 100;
	int var2 = 200;
	long var3 = 300;
	long long var4 = 400222222222222;
	float var5 = 3.14;
	double var6 = 3.15;
	long double var7 = 3.16;
	
	printf("字符型： %c\n", var);
	printf("字符型大小： %d\n", sizeof(var));
	printf("short短整型： %d\n", var1);
	printf("short短整型大小： %d\n", sizeof(var1));
	printf("int型： %d\n", var2);
	printf("int型大小： %d\n", sizeof(var2));
	printf("long长整型： %d\n", var3);
	printf("long长整型大小： %d\n", sizeof(var3));
	printf("long long超长整型： %d\n", var4);
	printf("long long超长整型大小： %d\n", sizeof(var4));
	printf("float单精度浮点型： %f\n", var5);
	printf("float单精度浮点型大小： %d\n", sizeof(var5));
	printf("double双精度浮点型： %lf\n", var6);
	printf("double双精度浮点型大小： %d\n", sizeof(var6));
	printf("long double长双精度浮点型： %lf\n", var7);
	printf("long double长双精度浮点型大小： %d\n", sizeof(long double));
	printf("unsigned int无符号int型大小： %d\n", sizeof(unsigned int));

	char  arr1[5] = {'s','l','s','v','\0'};
	char  arr2[] = {'a','c','\0'};
	char  arr3[] = "哈100a";
	char  arr4[4];
	arr4[0] = 'x';
	arr4[1] = '1';
	arr4[2] = '\0';
	arr4[3] = '\0';

	/* arr2字符串的长度是一个随机值，因为不知道字符串后面有几个\0 */
	printf("arr1： %s\n", arr1);
	printf("arr1所占空间大小： %d\n", sizeof(arr1));
	printf("arr1字符串长度： %d\n", strlen(arr1));
	printf("arr2： %s\n", arr2);
	printf("arr2所占空间大小： %d\n", sizeof(arr2));
	printf("arr2字符串长度： %d\n", strlen(arr2));
	printf("arr3： %s\n", arr3);
	printf("arr3所占空间大小： %d\n", sizeof(arr3));
	printf("arr3字符串长度： %d\n", strlen(arr3));
	printf("arr4： %s\n", arr4);
	printf("arr4所占空间大小： %d\n", sizeof(arr4));
	printf("arr4字符串长度： %d\n", strlen(arr4));
	
	int arr1Len= sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < arr1Len; i++)
	{
		printf("arr[%d] = %d\n", i,arr1[i]);
	}

	//转型:同类型小字节可以向大字节自动转化。char可以转int，int也可以转double,不能随便反向转
	char b = 'a';
	int a = b;
	double c=a;
	printf("字符b： %c\n", b);
	printf("char转int后a： %d\n", a);
	printf("int转double后c： %f\n", c);
	b = a;
	printf("int转char： %c\n", a);
	//取余运算后的符号取决于被模数的符号
	printf("10%(-3)： %d\n", 10 % (-3));
	printf("-10%%3： %d\n", -10 % 3);
	//逻辑运算符
	printf("1>=2： %s\n", 1>=2?"true":"false");
	//等待输入指令退出
	getchar();
	return 0;
}