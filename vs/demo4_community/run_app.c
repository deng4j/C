#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
/*
��ͬ�壺
1.��������һ��������������ͣ�����������ͬ���ڴ�λ�ô洢��ͬ���������͡�
2.���Զ���һ�����ж��Ա�Ĺ����壬�����κ�ʱ��ֻ����һ����Ա����ֵ,
Ҳ����ʹ�ø��Ǽ����������������า�ǡ�
*/

//һ.���干ͬ��
//��1�����岢����
union Data
{
	int a;
	char str[7];
	char str1[31];
}data;

//��2�������Ժ�����
union Data1
{
	int a;
	char str[6];
};
union Data1 data1;

int main() {
	//���Թ�������ڴ��С
	printf("Data��%d\n", sizeof(data1));
	//��������,���еĳ�Ա��������������Ϊͬһʱ��ֻ�õ�һ����Ա
	data1.a = 10;
	printf("a: %d\n", data1.a);
	strcpy(data1.str, "���");
	printf("str: %s", data1.str);
}