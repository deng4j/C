#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

/*
C 文件读写：一个文件，无论它是文本文件还是二进制文件，都是代表了一系列的字节。
*/

/*
一.打开文件：使用 fopen( ) 函数来创建一个新的文件或者打开一个已有的文件，
这个调用会初始化类型 FILE 的一个对象，类型 FILE 包含了所有用来控制流的必要的信息。

FILE *fopen( const char * filename, const char * mode );
filename 是字符串，用来命名文件，访问模式 mode 的值可以是下列值中的一个：
1.r：打开一个已有的文本文件，允许读取文件。
2.w：打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。
在这里，您的程序会从文件的开头写入内容。如果文件存在，则该会被截断为零长度，重新写入。
3.a：打开一个文本文件，以追加模式写入文件。如果文件不存在，则会创建一个新文件。
在这里，您的程序会在已有的文件内容中追加内容。

4.r+：打开一个文本文件，允许读写文件。
5.w+：打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，
如果文件不存在，则会创建一个新文件。
6.a+：打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。
读取会从文件的开头开始，写入则只能是追加模式。

如果处理的是二进制文件，则需使用下面的访问模式来取代上面的访问模式：
"rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"


二.关闭文件:使用 fclose( ) 函数。
int fclose( FILE *fp );
如果成功关闭文件，fclose( ) 函数返回零，如果关闭文件时发生错误，函数返回 EOF。
这个函数实际上，会清空缓冲区中的数据，关闭文件，并释放用于该文件的所有内存。
EOF 是一个定义在头文件 stdio.h 中的常量。


三.写入文件：
1.把单个字符写入到流中的最简单的函数：
int fputc( int c, FILE *fp );
2.函数把一个字符串写入到文件中:
int fputs( const char *s, FILE *fp );
int fprintf(FILE *fp,const char *format, ...) 

函数 fputc() 把参数 c 的字符值写入到 fp 所指向的输出流中。
如果写入成功，它会返回一个非负值，如果发生错误，则会返回 EOF。

注意：请确保您有可用的 tmp 目录，如果不存在该目录，则需要在您的计算机上先创建该目录。


四.读文件：
1.从文件读取单个字符的最简单的函数：
int fgetc( FILE * fp );
2.读取字符串的函数：
char *fgets( char *buf, int n, FILE *fp );
函数 fgets() 从 fp 所指向的输入流中读取 n - 1 个字符。
它会把读取的字符串复制到缓冲区 buf，并在最后追加一个 null 字符来终止字符串。

如果这个函数在读取最后一个字符之前就遇到一个换行符 '\n' 或文件的末尾 EOF，则只会返回读取到的字符，
包括换行符。您也可以使用 int fscanf(FILE *fp, const char *format, ...) 函数来从文件中读取字符串，
但是在遇到第一个空格和换行符时，它会停止读取。


五.二进制 I/O 函数
size_t fread(void *ptr, size_t size_of_elements,
			 size_t number_of_elements, FILE *a_file);

size_t fwrite(const void *ptr, size_t size_of_elements,
			 size_t number_of_elements, FILE *a_file);
这两个函数都是用于存储块的读写 - 通常是数组或结构体。
*/

void write();
void read();

int main() {
	//1.写文件
	//write();
	//2.读文件
	read();
}


void write() {
	
	char a[50];
	printf("请输入:");
	scanf("%[^\n]",a);
	strcat(a, "\n");

	FILE* pf = NULL;
	pf = fopen("./text.txt", "w+");
	//方式1,写入字符串
	fprintf(pf, a);
	//方式2,写入字符串
	fputs("What's the trick I wish I knew\n", pf);
	//输入单个字符
	fputc('X', pf);
	
	fclose(pf);
}

void read() {
	FILE* pf = NULL;
	pf = fopen("./text.txt", "r+");

	char buff[1024];
	//在后边遇到了一个空格会停止
	fscanf(pf, "%s", buff);
	printf("1: %s\n", buff);
	// 读取剩余的部分
	fgets(buff, 255, pf);
	printf("2: %s\n", buff);
	//完整地读取第二行。
	fgets(buff, 255, pf);
	printf("3: %s\n", buff);
	fclose(pf);

}