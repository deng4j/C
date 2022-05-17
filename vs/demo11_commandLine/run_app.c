#include<stdio.h>

/*
命令行参数：执行程序时，可以从命令行传值给 C 程序。是使用 main() 函数参数来处理的，其中，
argc 是指传入参数的个数，argv[] 是一个指针数组，指向传递给程序的每个参数。

cmd窗口运行命令：demo11_commandLine.exe  arg1 arg2
*/

int main(int argc, char* argv[]) {

    if (argc == 2)
    {
        printf("The argument supplied is %s\n", argv[1]);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf("One argument expected.\n");
    }

	return 0;
}