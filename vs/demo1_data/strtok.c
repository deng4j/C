#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>

int mainUGUI() {
	char str[] = "���Ǵ���񣬣���Ҫ��Ҫһ���棬����";

	//strtok()������ȡ�ַ���������\0�滻�ָ�ı�־λ����ɣ����Ǵ����\0��Ҫ��Ҫһ���棬����
	char* p=  strtok(str, "��");

	printf("�ָ��%s\n", str);
	printf("�ָ��%s\n",p);

	//�ٴν�ȡ���ַ����ỹ�ڻ�������
	p = strtok(NULL, "��");
	printf("�ٴηָ��%s\n", p);

	//�ٴν�ȡ���ַ����ỹ�ڻ�������
	p = strtok(NULL, "��");
	printf("�ٴηָ��%s\n", p);

	return 0;
}



int mainVYU() {
	char str[] = "123456789@qq.com";
	char backup[100] = {0};
	strcpy(backup, str);

	char* p = strtok(str, "@");

	printf("�ָ��%s\n", p);

	//�ٴν�ȡ���ַ����ỹ�ڻ�������
	p = strtok(NULL, ".");
	printf("�ٴηָ��%s\n", p);

	//�ٴν�ȡ���ַ����ỹ�ڻ�������
	p = strtok(NULL, "��");
	printf("�ٴηָ��%s\n", p);

	return 0;
}