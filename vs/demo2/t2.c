#include<stdio.h>

/*
指针：代表内存地址的长的十六进制数
& 用于产生操作数内存地址
“ * ” 是间接寻址或者间接引用运算符,声明指针时必须带*，给指针变量赋值时不能带*

例：
&a表示取变量 a 的地址，*(&a)表示取这个地址上的数据

int* p;        // 声明一个 int 类型的指针 p
char* p        // 声明一个 char 类型的指针 p
int *arr[10]   // 声明一个指针数组，该数组有10个元素，其中每个元素都是一个指向 int 类型对象的指针
int (*arr)[10] // 声明一个数组指针，该指针指向一个 int 类型的一维数组
int **p;       // 声明一个指针 p ，该指针指向一个 int 类型的指针

注意：
1.如果一个指针没有被初始化，那么程序就不知道它指向哪里,它可能指向一个非法地址，这时，程序会报错,
可以通过给一个指针赋一个零值来生成一个 NULL 指针。
2.a 只需要一次运算就能够取得数据，而 *p 要经过两次运算，因为*p会先获取到p本身的值（a的地址值），
然后再通过这个值去获取a的数据。
3.指针在全局作用域中,必须同时申请内存和初始化


*/
void print(int* a_adr);

int main3() {
	int var1 = 10;
	int* p;
	p = &var1;
	printf("var1的指针：%p \n", &var1);
	printf("获取var1的指针p的值：%d \n", *p);
	//-------指针赋值操作---------
	int a = 200;
	int* pa;
	pa = &a;
	print(pa);
	printf("指针以参数的方式传入并修改后: %d", a);
	return 0;
}


void print(int* a_adr) {
	*a_adr = 30;
}