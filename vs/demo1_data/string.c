#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>



/*
C�����ַ�����
�ַ���ʵ������ʹ�� null �ַ� \0 ��ֹ��һά�ַ�����
*/

int main33() {
	char str[6] = { '��','��','��','��','��','\0' };
	char str1[] = "������磡";
	printf("�ַ������γɵ��ַ���1��%s\n", str);
	printf("�ַ������γɵ��ַ���2��%s\n", str1);
	//�ַ�������
	char str2[] = "���Ǻ��౦��";
	strcpy(str1, str2);
	printf("�ַ������ƣ�%s\n", str1);
	//�ַ�������
	strcat(str1, str2);
	printf("�ַ������ӣ�%s\n", str1);
	printf("�ַ������Ӻ�ĳ��ȣ�%d\n", strlen(str1));
	return 0;
}