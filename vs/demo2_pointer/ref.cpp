#include<stdio.h>

/*
测试C++的引用传递
*/

void swap(int& x)
{
    x = 10;
    printf("子函数值：%d\n", x);
}
int mainYGYU()
{
    int a = 4;
    swap(a);
    printf("主方法值：%d\n", a);
}