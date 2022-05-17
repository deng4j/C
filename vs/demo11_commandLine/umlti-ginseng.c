#include<stdio.h>
#include <stdarg.h>

int get_sum(int num, ...) {
    va_list valist;
    int sum = 0;
    int i;

    /* 为 num 个参数初始化 valist */
    va_start(valist, num);

    /* 访问所有赋给 valist 的参数 */
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }
    /* 清理为 valist 保留的内存 */
    va_end(valist);

    return sum;
}



int mainHFD15() {
	
    int sum = get_sum(4,  2,3,4,5);
    printf("%d\n", sum);
	return 0;
}