#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>
#include <string.h>

/*
一.内存管理：
1.void *calloc(int num, int size);
在内存中动态地分配 num 个长度为 size 的连续空间，并将每一个字节都初始化为 0。
所以它的结果是分配了 num*size 个字节长度的内存空间，并且每个字节的值都是0。

2.void free(void *address); 
该函数释放 address 所指向的内存块,释放的是动态分配的内存空间。

3.void *malloc(int num); 
在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。

4.void *realloc(void *address, int newsize); 
该函数重新分配内存，把内存扩展到 newsize。

注意：void * 类型表示未确定类型的指针。
*/

/*
二.错误处理:
C 语言提供了 perror() 和 strerror() 函数来显示与 errno 相关的文本消息。
1.perror() 函数显示您传给它的字符串，后跟一个冒号、一个空格和当前 errno 值的文本表示形式。
2.strerror() 函数，返回一个指针，指针指向当前 errno 值的文本表示形式。
*/



/*
一.动态分配内存
1.一开始不知道要存储的长度，那就需要定义一个指针，该指针指向未定义所需内存大小
的字符，后续再根据需求来分配内存。
2.当动态分配内存时，您有完全控制权，可以传递任何大小的值。
而那些预先定义了大小的数组，一旦定义则无法改变大小。
*/
void dynamicallyMemory();

/*
二.重新调整内存的大小和释放内存
当程序退出时，操作系统会自动释放所有分配给程序的内存，
但是，建议您在不需要内存时，都应该调用函数 free() 来释放内存。
或者，您可以通过调用函数 realloc() 来增加或减少已分配的内存块的大小。
*/

/*
三.错误处理
*/
void err();

int main() {
	dynamicallyMemory();
	err();
}


void dynamicallyMemory() {
	char name[100];
	char* description;

	strcpy(name, "The World");

	//动态分配内存，也可以calloc(200, sizeof(char));
	description=(char*)malloc(200 * sizeof(char));
	if (description==NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}
	else
	{
		strcpy(description, "The World a DPS student in class 10th");
	}
	printf("Name = %s\n", name);
	printf("Description: %s\n", description);

	//释放内存
	free(description);
}

void err() {
	FILE* pf;
	int errnum;
	pf = fopen("unexist.txt", "rb");
	if (pf == NULL)
	{
		errnum = errno;
		fprintf(stderr, "错误号: %d\n", errno);
		perror("通过 perror 输出错误");
		fprintf(stderr, "打开文件错误: %s\n", strerror(errnum));
	}
	else
	{
		fclose(pf);
	}
}