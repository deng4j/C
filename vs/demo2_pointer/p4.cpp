#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//指针数组
int mainHIK() {
    int a = 45, b = 878, c = 211;
    //定义一个指针数组
    int* arr[3] = { &a, &b, &c };
    //赋值
    *arr[0] = 555;
    //定义一个指向指针数组的指针
    int** parr = arr;
    printf("%d, %d, %d\n", *arr[0], *arr[1], *arr[2]);
    printf("%d, %d, %d\n", **(parr + 0), **(parr + 1), **(parr + 2));
    return 0;
}


//数组指针
void mainHJK()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int* p;
    int(*q)[10];
    p = arr;  //数组首元素地址
    q = &arr;  //数组首地址

    //（数组首元素地址的操作）数组元素的引用与表示, 以第0个元素为例
    printf("************数组元素的7种基本表示方法*****\n");
    printf("arr[0] = %d, 1[arr] = %d, *(arr+2) = %d\n", arr[0], 1[arr], *(arr + 2));
    printf("p [0] = %d,  1[p]  = %d,  *(p+2)  = %d\n", p[0], 1[p], *(p + 2));
    printf(" *((int*)q + 1) = %d\n", *((int*)q + 1));
    printf("数组首元素的地址 = %p\n", p);
    printf("数组首元素的地址加一后的地址及其值: %p, %d\n", p + 1, *(p + 1));
    //（数组首地址的操作）指针指向的特殊改变
    printf("数组首地址 = %p\n", q);
    printf("数组首地址加一后的地址及其值：%p, %d\n", q + 1, *(int*)(q + 1));
}


//动态创建一维数组
int mainUOIH()
{

    int n1;
    int* array;
    printf("请输入所要创建的一维动态数组的长度：\n");
    scanf("%d", &n1);
    array = (int*)calloc(n1, sizeof(int));

    for (int i = 0; i < n1; i++)
    {
        array[i] = i + 1;
        printf("%d\t", array[i]);
    }
    //释放第一维指针 
    free(array);
    return 0;
}

//动态创建二维数组
int mainJIO()
{
    int n1, n2;
    int** array, i, j;
    printf("请输入所要创建的动态数组的第一维长度：\n");
    scanf("%d", &n1);
    printf("请输入所要创建的动态数组的第二维长度：\n");
    scanf("%d", &n2);

    //第一维 
    array = (int**)malloc(n1 * sizeof(int*)); 
    for (i = 0; i < n1; i++)
    {
        //第二维 
        array[i] = (int*)malloc(n2 * sizeof(int));
    }
    for (i = 0; i < n1; i++)
    {

        for (j = 0; j < n2; j++)
        {
            array[i][j] = i * n2 + j + 1;
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n1; i++)
    {
        //释放第二维指针 
        free(array[i]);
    }
    //释放第一维指针 
    free(array);
    return 0;
}