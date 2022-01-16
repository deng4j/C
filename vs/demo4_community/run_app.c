#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
/*
共同体：
1.共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
2.可以定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值,
也就是使用覆盖技术，几个变量互相覆盖。
*/

//一.定义共同体
//（1）定义并声明
union Data
{
	int a;
	char str[7];
	char str1[31];
}data;

//（2）定义稍后声明
union Data1
{
	int a;
	char str[6];
};
union Data1 data1;

int main() {
	//测试共用体的内存大小
	printf("Data：%d\n", sizeof(data1));
	//访问数据,所有的成员都能完好输出，因为同一时间只用到一个成员
	data1.a = 10;
	printf("a: %d\n", data1.a);
	strcpy(data1.str, "你好");
	printf("str: %s", data1.str);
}