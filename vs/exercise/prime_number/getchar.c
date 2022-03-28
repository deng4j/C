
#include<stdio.h>


/*
getchar()每次会去缓冲区去取一个字符
scanf会将空间中换行符'\n'前的字符串全部取出，存入到地址中
*/

int main() {

	int ch = 0;
	int temp = 0;
	while ((ch=getchar()) !=EOF)
	{
		if (ch>=97 && ch<=122)
		{
			temp = ch - 32;
		}
		else if (ch >= 65 && ch <= 90)
		{
			temp = ch + 32;
		}
		else
		{
			printf("请输入字母\n");
			continue;
		}

		printf("%c\n", temp);
		getchar(); //用于清理输入的换行符'\n'
	}

	return 0;
}