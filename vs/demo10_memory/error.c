#include<stdio.h>
#include<setjmp.h>

/*
setjmp()函数与longjmp()函数处理异常：setjmp() 为跳转返回保存现场并为异常提供处理程序，
longjmp() 则进行跳转（抛出异常），setjmp() 与 longjmp() 可以在函数间进行跳转
*/

jmp_buf mark;

int Div(int a, int b) {
    if (b == 0) {
        //会使state = 1
        longjmp(mark, 1);
    }
    return a / b;
}
int mainGGUI() {
    int State = setjmp(mark);   //保存寄存器相关信息,初始值为0
    if (State == 0) {
        Div(4, 0);
    }
    else {
        switch (State) {
        case 1:
            printf("除0异常!\n");
        }
    }
    return 0;
}