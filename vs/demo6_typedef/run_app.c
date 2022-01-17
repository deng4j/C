#include<stdio.h>


/*
typedef:
1.C 语言提供了 typedef 关键字，您可以使用它来为类型取一个新的名字。
2.也可以使用 typedef 来为用户自定义的数据类型取一个新的名字。

typedef vs #define:
1.typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，
也能为数值定义别名，比如您可以定义 1 为 ONE。
2.typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。
*/

/*
一.给int类型取一个名字，然后使用
*/

typedef int MyInt;

MyInt a = 10;

/*
二.给自定义类型取一个名字，然后使用此时books是一个类型
*/

typedef struct BOOK {
	int price;
} books;

int main() {
	printf("a的值：%d\n", a);
	books b1;
	b1.price = 20;
	printf("b1.price的值：%d\n", b1.price);
}