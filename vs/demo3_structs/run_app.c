#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
结构体：
1.结构是 C 编程中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项。
2.定义结构必须使用 struct 语句，struct 语句定义了一个包含多个成员的新的数据类型。
结构体的成员可以包含其他结构体，也可以包含指向自己结构体类型的指针，而通常这种指针
的应用是为了实现一些更高级的数据结构如链表和树等。
3.结构体访问成员：箭头是指针访问成员变量的,点运算符是用于结构体变量访问结构体成员变量的，a->b等价于(*a).b。

struct 结构体名
{
成员列表；
}变量名列表;
*/

/*一.定义结构: BOOKS标签；book变量，可以指定一个或多个结构变量*/
struct BOOKS
{
	int id;
	char title[50];
	char author[50];
	char subjiect[100];
} book;


/*二.tag结构体标签、member-list标准的变量定义、variable-list结构变量,这 3 部分至少要出现 2 个*/
/*（1）不声明其tag*/
struct 
{
	int a;
	int b;
} v1;

/*（2）不声明其变量，另外声明变量*/
struct STUDENT
{
	int id;
	char name;
};

struct STUDENT stu1, stu2[20];

/*（3）使用typedef创建新类型*/
typedef struct {
	int a;
	char b;
} Cup;

Cup c1, c2[20];
/*第一个和第二声明被编译器当作两个完全不同的类型，即使他们的成员列表是一样的*/


/*三.结构体的成员可以包含其他结构体，也可以包含指向自己结构体类型的指针*/
/*（1）包含其他声明的结构体*/
struct ARRAYLIST
{
	char str[100];
	struct STUDENT stu;
};

/*（2）包含指向自己的指针*/
struct NODE
{
	char str[100];
	struct NODE* next_node;
};


/*四.如果两个结构体互相包含，则需要对其中一个结构体进行不完整声明*/
/*（1）对结构体B进行不完整声明*/
struct B;

/*（2）结构体A包含指向结构体B的指针*/
struct A
{
	struct B* pb;
};

/*（3）结构体B包含指向结构体A的指针*/
struct B
{
	struct A* pa;
};


/*五.结构体变量的初始化*/
struct INIT
{
	char title[13];
	int b;
	char a[5];
	double  id;
} init={"你",10};


/*六.结构作为函数参数*/
void printINIT(struct INIT i);

void printINIT(struct INIT i) {
	printf("title:%s,id:%d\n", i.title, i.id);
}

/*七.指向结构的指针，箭头运算是结构体指针访问其指向的成员变量的操作符*/
void printINITPoint(struct INIT* pi);

void printINITPoint(struct INIT* pi) {
	printf("title:%s,id:%d\n", pi->title, pi->id);
}

/*
八.结构体的内存大小=最后一个成员的偏移量 + 最后一个成员的大小 + 末尾的填充字节数偏移量。
每一个成员相对于结构体首地址的偏移量都得是当前成员所占大小的整数倍，如果不是编译器就会在成员之间加上填充字节，
最后还会判断上面得到的结构体的大小是否是，结构体中最大基础类型成员大小的整数倍，是则不需要在末尾添加字节\0,否则需要添加。
*/

//九.测试结构体指针p++后指向
struct data
{
	int a;
	int b;
	int c;
};

int main() {
	/*五.测试结构体赋值与访问*/
	init.id = 20;
	printf("title:%s,id:%d\n", init.title, init.id);
	/*六.测试结构体作为函数参数*/
	struct INIT i1;
	strcpy(i1.title, "好");
	i1.id = 500;
	printINIT(i1);
	/*七.参数结构体指针*/
	struct INIT* pi;
	pi = &i1;
	printINITPoint(pi);
	/*
	八.测试结构体的内存大小：
	title的大小是2，所以id对于首地址的偏移量为2，又因为id占4个字节，偏移量2不是4的整数倍。
	所以编译器会在title后添加2个字节，偏移量就是4，就是id大小的整数倍了，所以此时这个结构体的大小为8
	还没结束，编译器还需要判断此时结构体总大小是不是结构体中最大的基本类型成员大小的整数倍
	（按整个结构对对齐，整个结构体的对齐值通常是结构体中最大数据类型所占的空间），是则
	最末尾不需要添加字节了，否则需要补全。
	INIT这个结构体此时总大小为8，最大字节成员大小为4，所以末尾也不用添加字节了。
	*/
	printf("结构体的大小： %d\n", sizeof(init));

	//九
	struct data a[3] = {
	   { 11, 12, 13},
	   { 21, 22, 23},
	   { 31, 32, 33}
	};
	int* p = &a[0].c; // *p=13 
	p++;
	printf("指针++后：%d\n ", *p);

}

