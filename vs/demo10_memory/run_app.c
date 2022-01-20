#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>
#include <string.h>

/*
һ.�ڴ����
1.void *calloc(int num, int size);
���ڴ��ж�̬�ط��� num ������Ϊ size �������ռ䣬����ÿһ���ֽڶ���ʼ��Ϊ 0��
�������Ľ���Ƿ����� num*size ���ֽڳ��ȵ��ڴ�ռ䣬����ÿ���ֽڵ�ֵ����0��

2.void free(void *address); 
�ú����ͷ� address ��ָ����ڴ��,�ͷŵ��Ƕ�̬������ڴ�ռ䡣

3.void *malloc(int num); 
�ڶ�������һ��ָ����С���ڴ�ռ䣬����������ݡ�����ڴ�ռ��ں���ִ����ɺ󲻻ᱻ��ʼ�������ǵ�ֵ��δ֪�ġ�

4.void *realloc(void *address, int newsize); 
�ú������·����ڴ棬���ڴ���չ�� newsize��

ע�⣺void * ���ͱ�ʾδȷ�����͵�ָ�롣
*/

/*
��.������:
C �����ṩ�� perror() �� strerror() ��������ʾ�� errno ��ص��ı���Ϣ��
1.perror() ������ʾ�����������ַ��������һ��ð�š�һ���ո�͵�ǰ errno ֵ���ı���ʾ��ʽ��
2.strerror() ����������һ��ָ�룬ָ��ָ��ǰ errno ֵ���ı���ʾ��ʽ��
*/



/*
һ.��̬�����ڴ�
1.һ��ʼ��֪��Ҫ�洢�ĳ��ȣ��Ǿ���Ҫ����һ��ָ�룬��ָ��ָ��δ���������ڴ��С
���ַ��������ٸ��������������ڴ档
2.����̬�����ڴ�ʱ��������ȫ����Ȩ�����Դ����κδ�С��ֵ��
����ЩԤ�ȶ����˴�С�����飬һ���������޷��ı��С��
*/
void dynamicallyMemory();

/*
��.���µ����ڴ�Ĵ�С���ͷ��ڴ�
�������˳�ʱ������ϵͳ���Զ��ͷ����з����������ڴ棬
���ǣ��������ڲ���Ҫ�ڴ�ʱ����Ӧ�õ��ú��� free() ���ͷ��ڴ档
���ߣ�������ͨ�����ú��� realloc() �����ӻ�����ѷ�����ڴ��Ĵ�С��
*/

/*
��.������
*/
void err();

int main() {
	dynamicallyMemory();
	err();
}


void dynamicallyMemory() {
	char name[100];
	char* description;

	strcpy(name, "The World");

	//��̬�����ڴ棬Ҳ����calloc(200, sizeof(char));
	description=(char*)malloc(200 * sizeof(char));
	if (description==NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}
	else
	{
		strcpy(description, "The World a DPS student in class 10th");
	}
	printf("Name = %s\n", name);
	printf("Description: %s\n", description);

	//�ͷ��ڴ�
	free(description);
}

void err() {
	FILE* pf;
	int errnum;
	pf = fopen("unexist.txt", "rb");
	if (pf == NULL)
	{
		errnum = errno;
		fprintf(stderr, "�����: %d\n", errno);
		perror("ͨ�� perror �������");
		fprintf(stderr, "���ļ�����: %s\n", strerror(errnum));
	}
	else
	{
		fclose(pf);
	}
}