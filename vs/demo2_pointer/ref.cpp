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
    return 0;
}

void ref2() {
    //&�ڴ˲���ʾ���ַ���㣬ֻ�����ʶ���ã���a���ڴ���һ�������������ڴ�
    int a = 10;
    int &b = a;
    printf("b��%d\n", b);
    b = 20;
    printf("b��%d\n", b);
    printf("a��%d\n", a);
}