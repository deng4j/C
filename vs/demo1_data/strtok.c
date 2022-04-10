#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>

int mainUGUI() {
	char str[] = "我是大菜鸟，，你要不要一起玩，？？";

	//strtok()函数截取字符串，会用\0替换分割的标志位，变成：我是大菜鸟\0你要不要一起玩，？？
	char* p=  strtok(str, "，");

	printf("分割后：%s\n", str);
	printf("分割后：%s\n",p);

	//再次截取，字符串会还在缓冲区中
	p = strtok(NULL, "，");
	printf("再次分割后：%s\n", p);

	//再次截取，字符串会还在缓冲区中
	p = strtok(NULL, "，");
	printf("再次分割后：%s\n", p);

	return 0;
}



int mainVYU() {
	char str[] = "123456789@qq.com";
	char backup[100] = {0};
	strcpy(backup, str);

	char* p = strtok(str, "@");

	printf("分割后：%s\n", p);

	//再次截取，字符串会还在缓冲区中
	p = strtok(NULL, ".");
	printf("再次分割后：%s\n", p);

	//再次截取，字符串会还在缓冲区中
	p = strtok(NULL, "，");
	printf("再次分割后：%s\n", p);

	return 0;
}