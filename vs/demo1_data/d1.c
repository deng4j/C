#include<stdio.h>
#include<string.h>
/*
.sln����Ŀ�ļ���ѡ��������Ŀ�����Ǵ�.c�ļ���
.exe�ǿ�ִ�г��򣬿���ѡ��release���Ͱ����ɺ��͸��������У��ϵ���Ӧ������32λX86�ġ�
*/


/*
64λ��������������:
char //�ַ������� 1
short //������ 2
int //���� 4
long //������ 4
long long //���������� 8
float //�����ȸ����� 4
double //˫���ȸ����� 8
long double //��˫���ȸ����� 8
unsigned int �޷������Σ�������Booleanֵ 4

һ������ռ�����ֽ�

%�������
1.%d�з���10��������
2.%c�����ַ�
3.%f����ʵ�����
4.%s�ַ���
5.%u�޷���10��������
6.%p  ��ӡ��ַ��ʽ
7.%04x ��16�������4λ
8.%[]������˼��������޶����ַ�,һ���������Ǵ˼����ڵ��ַ���ֹͣ��
9.%[^]��^��ʾ��,��ô���ǣ�һ�����������е�ֵ��ֹͣ��
���磺char a[50];
	 scanf("%[^\n]",a);

print_bin_simple(number); //ȥ��ǰ����Ч0����������ʽ���

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
	long double var7 = 3.16;
	
	printf("�ַ��ͣ� %c\n", var);
	printf("�ַ��ʹ�С�� %d\n", sizeof(var));
	printf("short�����ͣ� %d\n", var1);
	printf("short�����ʹ�С�� %d\n", sizeof(var1));
	printf("int�ͣ� %d\n", var2);
	printf("int�ʹ�С�� %d\n", sizeof(var2));
	printf("long�����ͣ� %d\n", var3);
	printf("long�����ʹ�С�� %d\n", sizeof(var3));
	printf("long long�������ͣ� %d\n", var4);
	printf("long long�������ʹ�С�� %d\n", sizeof(var4));
	printf("float�����ȸ����ͣ� %f\n", var5);
	printf("float�����ȸ����ʹ�С�� %d\n", sizeof(var5));
	printf("double˫���ȸ����ͣ� %lf\n", var6);
	printf("double˫���ȸ����ʹ�С�� %d\n", sizeof(var6));
	printf("long double��˫���ȸ����ͣ� %lf\n", var7);
	printf("long double��˫���ȸ����ʹ�С�� %d\n", sizeof(long double));
	printf("unsigned int�޷���int�ʹ�С�� %d\n", sizeof(unsigned int));

	char  arr1[5] = {'s','l','s','v','\0'};
	char  arr2[] = {'a','c','\0'};
	char  arr3[] = "��100a";
	char  arr4[4];
	arr4[0] = 'x';
	arr4[1] = '1';
	arr4[2] = '\0';
	arr4[3] = '\0';

	/* arr2�ַ����ĳ�����һ�����ֵ����Ϊ��֪���ַ��������м���\0 */
	printf("arr1�� %s\n", arr1);
	printf("arr1��ռ�ռ��С�� %d\n", sizeof(arr1));
	printf("arr1�ַ������ȣ� %d\n", strlen(arr1));
	printf("arr2�� %s\n", arr2);
	printf("arr2��ռ�ռ��С�� %d\n", sizeof(arr2));
	printf("arr2�ַ������ȣ� %d\n", strlen(arr2));
	printf("arr3�� %s\n", arr3);
	printf("arr3��ռ�ռ��С�� %d\n", sizeof(arr3));
	printf("arr3�ַ������ȣ� %d\n", strlen(arr3));
	printf("arr4�� %s\n", arr4);
	printf("arr4��ռ�ռ��С�� %d\n", sizeof(arr4));
	printf("arr4�ַ������ȣ� %d\n", strlen(arr4));
	
	int arr1Len= sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < arr1Len; i++)
	{
		printf("arr[%d] = %d\n", i,arr1[i]);
	}

	//ת��:ͬ����С�ֽڿ�������ֽ��Զ�ת����char����תint��intҲ����תdouble,������㷴��ת
	char b = 'a';
	int a = b;
	double c=a;
	printf("�ַ�b�� %c\n", b);
	printf("charתint��a�� %d\n", a);
	printf("intתdouble��c�� %f\n", c);
	b = a;
	printf("intתchar�� %c\n", a);
	//ȡ�������ķ���ȡ���ڱ�ģ���ķ���
	printf("10%(-3)�� %d\n", 10 % (-3));
	printf("-10%%3�� %d\n", -10 % 3);
	//�߼������
	printf("1>=2�� %s\n", 1>=2?"true":"false");
	//�ȴ�����ָ���˳�
	getchar();
	return 0;
}