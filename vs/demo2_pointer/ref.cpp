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
    return 0;
}

void ref2() {
    //&在此不表示求地址运算，只是起标识作用，给a的内存起一个别名，共享内存
    int a = 10;
    int &b = a;
    printf("b：%d\n", b);
    b = 20;
    printf("b：%d\n", b);
    printf("a：%d\n", a);
}