#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*
λ��
struct λ��ṹ��
{
���� λ���� : ��ȣ�
};

1.�ṹ���������ֻ�洢һ���ֽڣ�ʹ��unsigned int����4���ֽڣ�ʵ��̫�˷ѣ�
�ǾͿ��Զ�������Ŀ�ȸ��߱�������
2.λ�������ֻ��Ϊ int(����)��unsigned int(�޷�������)��signed int(�з�������) �������ͣ�
��������ν���λ���ֵ��
3.��ȱ���С�ڻ����ָ�����͵�λ��ȡ�
4.�洢���ֽڴ���λ�������޷���ɡ�
*/

/*һ.λ��ʹ��*/

struct BOOK
{
	unsigned int a : 10;
	unsigned int ��2; //��λ��
	unsigned short b : 3; //short����ռ4���ֽ�
	unsigned long c : 3;  //ռ4���ֽ�
	unsigned int d : 10;
	unsigned int e : 24;
}books = {1,2,1,3,10},*pbit;

void bin_simple(int);

int main() {
	//����λ��ṹ��Ĵ�С
	printf("λ��ṹ���С�� %d\n", sizeof(books));
	//���Գ���λ���С�󣬵õ���ֵ
	int bin_num;
	printf("������10����ֵ��");
	scanf("%d",&bin_num);
	bin_simple(bin_num);
	printf("d��ֵ�� %d\n", books.d);
	//��ֵ
	books.a = 5;
	printf("a��ֵ�� %d\n", books.a);
	//ָ�뷽ʽ��ֵ
	pbit = &books;
	pbit->a = 3;
	printf("a��ֵ�� %d\n", books.a);
	printf("a��ֵ�� %d\n", pbit->a);
	return 0;
}

/*�����Ƽ��㺯��*/
void bin_simple(int num) {
	int a[32] = {0};
	int newNum=num ;
	int count=0;
	while (num)
	{
		a[count] = num % 2;
		num /= 2;
		count++;
	}

	printf("%d �Ķ�����λ��", newNum);
	for (int i = 31; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}