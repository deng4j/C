#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {

	char targets[100] = "���C����";
	char str[] = "��һ����";
	strcat(targets, str);

	printf("׷�ӣ�%s\n", targets);

	return 0;
}