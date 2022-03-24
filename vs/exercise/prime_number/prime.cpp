#include<stdio.h>


int mainHJ() {
	int a, b;
	while (true)
	{
		scanf_s("%d", &b);
		if (b == -1)
		{
			return 0;
		}

		for (a = 1; b % a; a++);

		if (a == b)
		{
			printf("%d不是素数：\n", b);
		}
		else
		{
			printf("%d是素数：\n", b);
		}
	}

	return 0;
}