#include<stdio.h>


/*
typedef:
1.C �����ṩ�� typedef �ؼ��֣�������ʹ������Ϊ����ȡһ���µ����֡�
2.Ҳ����ʹ�� typedef ��Ϊ�û��Զ������������ȡһ���µ����֡�

typedef vs #define:
1.typedef ������Ϊ���Ͷ���������ƣ�#define ��������Ϊ���Ͷ��������
Ҳ��Ϊ��ֵ������������������Զ��� 1 Ϊ ONE��
2.typedef ���ɱ�����ִ�н��͵ģ�#define �������Ԥ���������д���ġ�
*/

/*
һ.��int����ȡһ�����֣�Ȼ��ʹ��
*/

typedef int MyInt;

MyInt a = 10;

/*
��.���Զ�������ȡһ�����֣�Ȼ��ʹ�ô�ʱbooks��һ������
*/

typedef struct BOOK {
	int price;
} books;

int main() {
	printf("a��ֵ��%d\n", a);
	books b1;
	b1.price = 20;
	printf("b1.price��ֵ��%d\n", b1.price);
}