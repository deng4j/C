#include<stdio.h>


int mainSFFS() {
    int a = 10;
    int* p1 = &a; //ָ�벻�ɱ��޸ģ�ָ���ֵ�����޸�
    *p1 = 7;   //*pʱ���ı����p��ָ��ĵ�ַ��ŵ�����
    printf("a:%d\n", a);  //��ӡa:7

    int b = 20;
    int* p2 = &b;
    p1 = p2; //pʱ���ı����p��ָ��ĵ�ַ
    printf("a:%d\n", a);  //��ӡa:7
    printf("p1ָ��:%d\n", *p1);  //��ӡa:20

    return 0;
}


int mainGH() {
    int a = 10;
    int c = 30;
    int* p = &c;                                            //   p	0x00000036c90ff624 {30}	int *

    const int* p1 = &a; //ָ��ɱ��޸ģ�ָ���ֵ�������޸�        //   p1	0x00000036c90ff5e4 {10}	const int *
    printf("p1ָ��: %d \n", *p1);  //��ӡp1ָ��: 20              
    //*p1 = 30;      //������󣺱����ǿ��޸ĵ���ֵ
    p1 = p;                                                  //   p1	0x00000036c90ff624 {30}	const int *
    printf("p1ָ��: %d \n", *p1);  //��ӡp1ָ��: 30

    int* const p2 = &a; //ָ�벻�ɱ��޸ģ�ָ���ֵ�ɱ��޸�        //    p2	0x00000036c90ff5e4 {10}	int * const
    //p2 = p;    //������󣺱����ǿ��޸ĵ���ֵ
    *p2 = 30;                                                //    p2	0x00000036c90ff5e4 {30}	int * const
    printf("p2ָ��: %d \n", *p2);  //��ӡp2ָ��: 30

    const int* const p3 = &a;  //ָ���ָ���ֵ�����ɱ��޸ģ�ֻ��  //    p3	0x00000036c90ff5e4 {30}	const int * const
    //*p3 = 30;   //������󣺱����ǿ��޸ĵ���ֵ
    //p3 = p;     //������󣺱����ǿ��޸ĵ���ֵ
    printf("p3ָ��: %d \n", *p3);  //��ӡp2ָ��: 30
    return 0;
}
