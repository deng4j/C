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
		printf("非法指针\n");
	}

	link->next = NULL;
	if (!link->next)
	{
		printf("空指针\n");
	}
	if (link)
	{
		printf("合法指针\n");
	}
	return 0;
}