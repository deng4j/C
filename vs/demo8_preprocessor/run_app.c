#define _CRT_SECURE_NO_WARNNINGS

/*
一.C预处理器：
1.C 预处理器不是编译器的组成部分，但是它是编译过程中一个单独的步骤。简言之，C 预处理器只
不过是一个文本替换工具而已，它们会指示编译器在实际编译之前完成所需的预处理。
2.所有的预处理器命令都是以井号（#）开头。它必须是第一个非空字符，为了增强可读性，预处理器指令应从第一列开始。

#define：定义宏
#include： 包含一个源代码文件
#undef：取消已定义的宏
#ifdef：如果宏已经定义，则返回真
#ifndef：如果宏没有定义，则返回真
#if：如果给定条件为真，则编译下面代码
#else：#if 的替代方案
#elif：如果前面的 #if 给定条件不为真，当前条件为真，则编译下面代码
#endif：结束一个 #if……#else 条件编译块
#error：当遇到标准错误时，输出错误消息
#pragma：使用标准化方法，向编译器发布特殊的命令到编译器中

二.预定义宏
ANSI C 定义了许多宏。在编程中您可以使用这些宏，但是不能直接修改这些预定义的宏。
1.__DATE__：当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
2.__TIME__：当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
3.__FILE__：这会包含当前文件名，一个字符串常量。
4.__LINE__：	这会包含当前行号，一个十进制常量。
5.__STDC__：当编译器以 ANSI 标准编译时，则定义为 1。

三.预处理器运算符

*/

/*一.预处理器实例*/
/*1.这个指令告诉CPP把所有MAX_ARRAY_LENGTH 替换为 20。*/
#define MAX_ARRAY_LENGTH 20

/*2.告诉 CPP 从系统库中获取 stdio.h，并添加文本到当前的源文件中。*/
#include<stdio.h>

/*3.告诉 CPP 从本地目录中获取 myheader.h，并添加内容到当前的源文件中。*/
#include "myheader.h"

/*4.告诉 CPP 取消已定义的 FILE_SIZE，并定义它为 42。*/
#undef  FILE_SIZE
#define FILE_SIZE 42

/*5.告诉 CPP 只有当 MESSAGE 未定义时，才定义 MESSAGE。*/
#ifndef MESSAGE
#define MESSAGE "You wish!"
#endif

/*6.指令告诉 CPP 如果定义了 DEBUG，则执行处理语句。*/
#ifdef DEBUG
   /* Your debugging statements here */
#endif

/*二.预定义宏*/
void macro();
void macro() {
	printf("File :%s\n", __FILE__);
	printf("Date :%s\n", __DATE__);
	printf("Time :%s\n", __TIME__);
	printf("Line :%d\n", __LINE__);
	//printf("ANSI :%d\n", __STDC__);
}

/*三.预处理器运算符*/
/*1.宏延续运算符（\）:一个宏通常写在一个单行上。但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）。*/
/*2.字符串常量化运算符（#）:在宏定义中，当需要把一个宏的参数转换为字符串常量时，则使用字符串常量化运算符（#）。*/
#define print_msg(a,b)\
printf(#a "and" #b "：brother \n")

/*3.标记粘贴运算符（##）:宏定义内的标记粘贴运算符（##）会合并两个参数。它允许在宏定义中两个独立的标记被合并为一个标记。*/
#define tokenpaster(n) printf ("token" #n " = %d", token##n)

/*
4.defined() 运算符:预处理器 defined 运算符是用在常量表达式中的，用来确定一个标识符是否已经使用 #define 定义过。
如果指定的标识符已定义，则值为真（非零）。如果指定的标识符未定义，则值为假（零）。
*/

/*四.参数化的宏*/
/*1.CPP 一个强大的功能是可以使用参数化的宏来模拟函数。例如，下面的代码是计算一个数的平方：*/
int square(int x) {
	return x * x;
}
/*可以使用宏重写上面的代码*/
#define square(x) ((x) * (x))

/*
2.在使用带有参数的宏之前，必须使用 #define 指令定义。参数列表是括在圆括号内，
且必须紧跟在宏名称的后边。宏名称和左圆括号之间不允许有空格。例如：
*/
#define MAX(x,y) ((x) > (y) ? (x) : (y))


#if !defined (MESSAGE)
#define MESSAGE "You wish!"
#endif

int main() {

	macro();

	print_msg(兰博,辛瓦施格);

	int token34 = 40;
	tokenpaster(34);

	printf("Here is the message: %s\n", MESSAGE);

	printf("Max between 20 and 10 is %d\n", MAX(10, 20));
}