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
			printf("%d����������\n", b);
			continue;
		}

		for (a = 2; b % a; a++) {
			printf("%d\n",b%a);
		}

		if (a != b)
		{
			printf("%d����������\n", b);
		}
		else
		{
			printf("%d��������\n", b);
		}
	}

	return 0;
}