#include<stdio.h>
#include<setjmp.h>

/*
setjmp()������longjmp()���������쳣��setjmp() Ϊ��ת���ر����ֳ���Ϊ�쳣�ṩ�������
longjmp() �������ת���׳��쳣����setjmp() �� longjmp() �����ں����������ת
*/

jmp_buf mark;

int Div(int a, int b) {
    if (b == 0) {
        //��ʹstate = 1
        longjmp(mark, 1);
    }
    return a / b;
}
int mainGGUI() {
    int State = setjmp(mark);   //����Ĵ��������Ϣ,��ʼֵΪ0
    if (State == 0) {
        Div(4, 0);
    }
    else {
        switch (State) {
        case 1:
            printf("��0�쳣!\n");
        }
    }
    return 0;
}