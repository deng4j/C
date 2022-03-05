#include<stdio.h>

/*
定义常量：
1.使用 #define 预处理器。
2.const 关键字

存储类：
1.auto 存储类是所有局部变量默认的存储类,auto 只能用在函数内，即 auto 只能修饰局部变量。
2.register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。
这意味着变量的最大尺寸等于寄存器的大小（通常是一个字），
且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。
3.static 存储类指示编译器在程序的生命周期内保持局部变量的存在，
而不需要在每次它进入和离开作用域时进行创建和销毁
4.extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件
都是可见的。当您使用 extern 时，对于无法初始化的变量，会把变量名指向
一个之前定义过的存储位置。
extern 是用来在另一个文件中声明一个全局变量或函数,声明可以多次，定义只能一次。

注意：
1.全局变量不能多次初始化
2.函数声明要放在调用的前面
*/

#define LENGTH 10


int add() {
    const int WITH = 5;
    return LENGTH + WITH;
}

static int year = 10;
int subtract() {
    auto int year1 = 20;
    register int year2 = 100;
    return year2 - year - year1;
}

extern int g_val;

int main0() {

    char a = 'a';

    printf("cahr: %d \n", a);
    printf("add(): %d \n", add());
    printf("subtract(): %d \n", subtract());
    printf("全局变量：%d", g_val);
    getchar();


    return 0;

}


