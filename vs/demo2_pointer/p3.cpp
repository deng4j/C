#include<stdio.h>


int mainSFFS() {
    int a = 10;
    int* p1 = &a; //指针不可被修改，指向的值可以修改
    *p1 = 7;   //*p时，改变的是p所指向的地址存放的数据
    printf("a:%d\n", a);  //打印a:7

    int b = 20;
    int* p2 = &b;
    p1 = p2; //p时，改变的是p所指向的地址
    printf("a:%d\n", a);  //打印a:7
    printf("p1指向:%d\n", *p1);  //打印a:20

    return 0;
}


int mainGH() {
    int a = 10;
    int c = 30;
    int* p = &c;                                            //   p	0x00000036c90ff624 {30}	int *

    const int* p1 = &a; //指针可被修改，指向的值不可以修改        //   p1	0x00000036c90ff5e4 {10}	const int *
    printf("p1指向: %d \n", *p1);  //打印p1指向: 20              
    //*p1 = 30;      //编译错误：必须是可修改的左值
    p1 = p;                                                  //   p1	0x00000036c90ff624 {30}	const int *
    printf("p1指向: %d \n", *p1);  //打印p1指向: 30

    int* const p2 = &a; //指针不可被修改，指向的值可被修改        //    p2	0x00000036c90ff5e4 {10}	int * const
    //p2 = p;    //编译错误：必须是可修改的左值
    *p2 = 30;                                                //    p2	0x00000036c90ff5e4 {30}	int * const
    printf("p2指向: %d \n", *p2);  //打印p2指向: 30

    const int* const p3 = &a;  //指针和指向的值都不可被修改，只读  //    p3	0x00000036c90ff5e4 {30}	const int * const
    //*p3 = 30;   //编译错误：必须是可修改的左值
    //p3 = p;     //编译错误：必须是可修改的左值
    printf("p3指向: %d \n", *p3);  //打印p2指向: 30
    return 0;
}
