#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//ָ������
int mainHIK() {
    int a = 45, b = 878, c = 211;
    //����һ��ָ������
    int* arr[3] = { &a, &b, &c };
    //��ֵ
    *arr[0] = 555;
    //����һ��ָ��ָ�������ָ��
    int** parr = arr;
    printf("%d, %d, %d\n", *arr[0], *arr[1], *arr[2]);
    printf("%d, %d, %d\n", **(parr + 0), **(parr + 1), **(parr + 2));
    return 0;
}


//����ָ��
void mainHJK()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int* p;
    int(*q)[10];
    p = arr;  //������Ԫ�ص�ַ
    q = &arr;  //�����׵�ַ

    //��������Ԫ�ص�ַ�Ĳ���������Ԫ�ص��������ʾ, �Ե�0��Ԫ��Ϊ��
    printf("************����Ԫ�ص�7�ֻ�����ʾ����*****\n");
    printf("arr[0] = %d, 1[arr] = %d, *(arr+2) = %d\n", arr[0], 1[arr], *(arr + 2));
    printf("p [0] = %d,  1[p]  = %d,  *(p+2)  = %d\n", p[0], 1[p], *(p + 2));
    printf(" *((int*)q + 1) = %d\n", *((int*)q + 1));
    printf("������Ԫ�صĵ�ַ = %p\n", p);
    printf("������Ԫ�صĵ�ַ��һ��ĵ�ַ����ֵ: %p, %d\n", p + 1, *(p + 1));
    //�������׵�ַ�Ĳ�����ָ��ָ�������ı�
    printf("�����׵�ַ = %p\n", q);
    printf("�����׵�ַ��һ��ĵ�ַ����ֵ��%p, %d\n", q + 1, *(int*)(q + 1));
}


//��̬����һά����
int mainUOIH()
{

    int n1;
    int* array;
    printf("��������Ҫ������һά��̬����ĳ��ȣ�\n");
    scanf("%d", &n1);
    array = (int*)calloc(n1, sizeof(int));

    for (int i = 0; i < n1; i++)
    {
        array[i] = i + 1;
        printf("%d\t", array[i]);
    }
    //�ͷŵ�һάָ�� 
    free(array);
    return 0;
}

//��̬������ά����
int mainJIO()
{
    int n1, n2;
    int** array, i, j;
    printf("��������Ҫ�����Ķ�̬����ĵ�һά���ȣ�\n");
    scanf("%d", &n1);
    printf("��������Ҫ�����Ķ�̬����ĵڶ�ά���ȣ�\n");
    scanf("%d", &n2);

    //��һά 
    array = (int**)malloc(n1 * sizeof(int*)); 
    for (i = 0; i < n1; i++)
    {
        //�ڶ�ά 
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
        //�ͷŵڶ�άָ�� 
        free(array[i]);
    }
    //�ͷŵ�һάָ�� 
    free(array);
    return 0;
}