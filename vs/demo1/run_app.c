#include<stdio.h>
#include<string.h>
/*
.sln����Ŀ�ļ���ѡ��������Ŀ�����Ǵ�.c�ļ���
.exe�ǿ�ִ�г��򣬿���ѡ��release���Ͱ����ɺ��͸��������У��ϵ���Ӧ������32λX86�ġ�
*/


/*
��������:
char //�ַ�������
short //������
int //����
long //������
long long //����������
float //�����ȸ�����
double //˫���ȸ�����

һ������ռ�����ֽ�

%�������
1.%d�з���10��������
2.%c�����ַ�
3.%f����ʵ�����
4.%s�ַ���
5.%u�޷���10��������
6.%p  ��ӡ��ַ��ʽ

sizeof:����ռ�ռ��С
strlen�����ַ�������


���飺
���鴴��ʱ�ĳ��ȱ�����һ������
*/


int main() {

	char var = 'A';
	short var1 = 100;
	int var2 = 200;
	long var3 = 300;
	long long var4 = 400222222222222;
	float var5 = 3.14;
	double var6 = 3.15;
	
	printf("�ַ��ͣ� %c\n", var);
	printf("short�������ͣ� %d\n", var1);
	printf("int�ͣ� %d\n", var2);
	printf("long�����ͣ� %d\n", var3);
	printf("long long�������ͣ� %d\n", var4);
	printf("long long��������ռ�ֽ����� %d\n", sizeof(long long));
	printf("float�����ȸ����ͣ� %f\n", var5);
	printf("double˫���ȸ����ͣ� %lf\n", var6);

	char  arr1[5] = {10,20,30,40};
	char  arr2[] = {'��','��'};
	char  arr3[] = "��10";
	char  arr4[4];
	arr4[0] = 10;
	arr4[1] = 20;
	arr4[3] = 30;

	/* arr2�ַ����ĳ�����һ�����ֵ����Ϊ��֪���ַ��������м���\0 */
	
	printf("arr1��ռ�ռ��С�� %d\n", sizeof(arr1));
	printf("arr1�ַ������ȣ� %d\n", strlen(arr1));
	printf("arr2��ռ�ռ��С�� %d\n", sizeof(arr2));
	printf("arr2�ַ������ȣ� %d\n", strlen(arr2));
	printf("arr3��ռ�ռ��С�� %d\n", sizeof(arr3));
	printf("arr3�ַ������ȣ� %d\n", strlen(arr3));
	printf("arr4��ռ�ռ��С�� %d\n", sizeof(arr4));
	printf("arr4�ַ������ȣ� %d\n", strlen(arr4));
	
	int arr1Len= sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < arr1Len; i++)
	{
		printf("arr[%d] = %d\n", i,arr1[i]);
	}

	//getchar()�ȴ�����ָ���˳�
	getchar();
	return 0;
}