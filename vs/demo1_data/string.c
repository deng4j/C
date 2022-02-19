#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>



/*
C语言字符串：
字符串实际上是使用 null 字符 \0 终止的一维字符数组
*/

int main33() {
	char str[6] = { '你','好','世','界','！','\0' };
	char str1[] = "你好世界！";
	printf("字符数组形成的字符串1：%s\n", str);
	printf("字符数组形成的字符串2：%s\n", str1);
	//字符串复制
	char str2[] = "我是海绵宝宝";
	strcpy(str1, str2);
	printf("字符串复制：%s\n", str1);
	//字符串连接
	strcat(str1, str2);
	printf("字符串连接：%s\n", str1);
	printf("字符串连接后的长度：%d\n", strlen(str1));
	return 0;
}