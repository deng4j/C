#include<stdio.h>

/*
����C++�����ô���
*/

void swap(int& x)
{
    x = 10;
    printf("�Ӻ���ֵ��%d\n", x);
}
int mainYGYU()
{
    int a = 4;
    swap(a);
    printf("������ֵ��%d\n", a);
}