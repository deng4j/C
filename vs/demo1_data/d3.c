#include<stdio.h>

int g_val = 101;

/*
C语言中的运算方式、条件判断语句、循环和java一样
C语言中变量作用域是就近原则，比如局部变量和全局变量的声明一样，那么该函数会采用局部变量
C语言数组和java一样
*/

/*
枚举：在C 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的
*/

//一.定义Boolean值
/* 方法1 */
#define TRUE 1
#define FALSE 0

/* 方法2 */
enum bool{ false, true };


/*二、先定义枚举类型并定义枚举变量*/
enum Day
{
	MON, TUE, WED, THU, FRI, SAT, SUN
} day;



int main1() {

	for (day = MON; day <= SUN; day++)
	{
		printf("%d \n", day);
	}

	printf("MON: %d", THU);
	return 0;
}

