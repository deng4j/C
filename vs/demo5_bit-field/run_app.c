#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*
位域：
struct 位域结构名
{
类型 位域名 : 宽度；
};

1.结构中如果变量只存储一个字节，使用unsigned int申请4个字节，实在太浪费，
那就可以定义变量的宽度告诉编译器。
2.位域的类型只能为 int(整型)，unsigned int(无符号整型)，signed int(有符号整型) 三种类型，
决定了如何解释位域的值。
3.宽度必须小于或等于指定类型的位宽度。
4.存储的字节大于位域宽度则无法完成。
*/

/*一.位域使用*/

struct BOOK
{
	unsigned int a : 10;
	unsigned int ：2; //空位域
	unsigned short b : 3; //short这里占4个字节
	unsigned long c : 3;  //占4个字节
	unsigned int d : 10;
	unsigned int e : 24;
}books = {1,2,1,3,10},*pbit;

void bin_simple(int);

int main() {
	//测试位域结构体的大小
	printf("位域结构体大小： %d\n", sizeof(books));
	//测试超过位域大小后，得到的值
	int bin_num;
	printf("请输入10进制值：");
	scanf("%d",&bin_num);
	bin_simple(bin_num);
	printf("d的值： %d\n", books.d);
	//赋值
	books.a = 5;
	printf("a的值： %d\n", books.a);
	//指针方式赋值
	pbit = &books;
	pbit->a = 3;
	printf("a的值： %d\n", books.a);
	printf("a的值： %d\n", pbit->a);
	return 0;
}

/*二进制计算函数*/
void bin_simple(int num) {
	int a[32] = {0};
	int newNum=num ;
	int count=0;
	while (num)
	{
		a[count] = num % 2;
		num /= 2;
		count++;
	}

	printf("%d 的二进制位：", newNum);
	for (int i = 31; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}