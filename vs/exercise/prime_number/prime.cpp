#include<stdio.h>


int mainIJ15() {
	int a, b;
	while (true)
	{
		scanf_s("%d", &b);
		if (b == -1)
		{
			return 0;
		}

		if (b==1)
		{
			printf("%d不是素数：\n", b);
			continue;
		}

		for (a = 2; b % a; a++) {
			printf("%d\n",b%a);
		}

		if (a != b)
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