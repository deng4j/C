#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>



int mainGUIOI() {
	int index;

	scanf("%d", &index);

	char* week[] = { "Monday","Tuesday","Wednesday","Thursday",
		"Friday","Saturday","Sunday"};

	printf("%s\n", week[index-1]);

}