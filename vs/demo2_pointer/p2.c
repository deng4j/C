#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <stdlib.h>

typedef struct Node {
	int elem;
	struct Node* next;
}node,*linked;

int mainXXXXXX() {
	linked link = (linked)malloc(sizeof(node));
	if (link->next)  
	{
		printf("�Ƿ�ָ��\n");
	}

	link->next = NULL;
	if (!link->next)
	{
		printf("��ָ��\n");
	}
	if (link)
	{
		printf("�Ϸ�ָ��\n");
	}
	return 0;
}