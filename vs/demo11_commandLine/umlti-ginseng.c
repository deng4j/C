#include<stdio.h>
#include <stdarg.h>

int get_sum(int num, ...) {
    va_list valist;
    int sum = 0;
    int i;

    /* Ϊ num ��������ʼ�� valist */
    va_start(valist, num);

    /* �������и��� valist �Ĳ��� */
    for (i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
    }
    /* ����Ϊ valist �������ڴ� */
    va_end(valist);

    return sum;
}



int mainHFD15() {
	
    int sum = get_sum(4,  2,3,4,5);
    printf("%d\n", sum);
	return 0;
}