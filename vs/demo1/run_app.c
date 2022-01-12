#include<stdio.h>
#include<string.h>
/*
.sln是项目文件，选择它打开项目。不是打开.c文件。
.exe是可执行程序，可以选择release发型版生成后发送给朋友运行，老电脑应该运行32位X86的。
*/


/*
数据类型:
char //字符数据型
short //短整型
int //整型
long //长整型
long long //更长的整型
float //单精度浮点型
double //双精度浮点型

一个中文占两个字节

%的输出：
1.%d有符号10进制整数
2.%c单个字符
3.%f：以实型输出
4.%s字符串
5.%u无符号10进制整数
6.%p  打印地址形式

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
	
	printf("字符型： %c\n", var);
	printf("short短整型型： %d\n", var1);
	printf("int型： %d\n", var2);
	printf("long长整型： %d\n", var3);
	printf("long long超长整型： %d\n", var4);
	printf("long long超长整型占字节数： %d\n", sizeof(long long));
	printf("float单精度浮点型： %f\n", var5);
	printf("double双精度浮点型： %lf\n", var6);

	char  arr1[5] = {10,20,30,40};
	char  arr2[] = {'嘎','嘎'};
	char  arr3[] = "哈10";
	char  arr4[4];
	arr4[0] = 10;
	arr4[1] = 20;
	arr4[3] = 30;

	/* arr2字符串的长度是一个随机值，因为不知道字符串后面有几个\0 */
	
	printf("arr1所占空间大小： %d\n", sizeof(arr1));
	printf("arr1字符串长度： %d\n", strlen(arr1));
	printf("arr2所占空间大小： %d\n", sizeof(arr2));
	printf("arr2字符串长度： %d\n", strlen(arr2));
	printf("arr3所占空间大小： %d\n", sizeof(arr3));
	printf("arr3字符串长度： %d\n", strlen(arr3));
	printf("arr4所占空间大小： %d\n", sizeof(arr4));
	printf("arr4字符串长度： %d\n", strlen(arr4));
	
	int arr1Len= sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < arr1Len; i++)
	{
		printf("arr[%d] = %d\n", i,arr1[i]);
	}

	//getchar()等待输入指令退出
	getchar();
	return 0;
}