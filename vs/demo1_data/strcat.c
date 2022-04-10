#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {

	char targets[100] = "你好C语言";
	char str[] = "，一起玩";
	strcat(targets, str);

	printf("追加：%s\n", targets);

	return 0;
}