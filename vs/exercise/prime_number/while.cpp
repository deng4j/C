#include<stdio.h>

int mainFGHJ() {

	int n = 0;
	int total = 0;
	while (true)
	{
		n++;
		if (n%2==1)
		{
			continue;
		}
		total += n;
		if (n == 100) {
			break;
		}
	}
	printf("%d\n",total);

	return 0;
}