#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>

int mainJG15() {

	int n;
	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	

	return 0;
}


int mainHGH1() {

	int n;
	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}


	return 0;
}


int mainHGF1575() {

	int n;
	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}


	return 0;
}

int mainJHF483() {

	int n;
	while (~scanf("%d", &n))
	{
		for (int i = n; i >0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}


	return 0;
}


int mainHGF153() {

	int n;
	while (~scanf("%d", &n))
	{
		for (int i = 1; i <=n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (n+1-j<=i)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}			
			}
			printf("\n");
		}
	}
	return 0;
}

/*
	  *
	***
  *****
*******

*/

int mainJHGF12() {

	int n;
	while (~scanf("%d", &n))
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j < 2*n; j++)
			{
				if ((2*n - j)/2 <= i-1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}

int mainJGF1JH5()
{
	int n, i, j;
	while (~scanf("%d", &n))
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				printf(" ");
			}
			j = 0;
			for (j = 0; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}

int mainHFCO54() {
	int n;
	scanf("%d",&n);
	for (int  i = n+1; i >1; i--)
	{
		for (int  j = i; j >0; j--)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (int i = 1; i <=n+1; i++)
	{
		for (int j = i; j > 0; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}



int mainJHCMY15() {
	int n=2;
	while (~scanf("%d", &n))
	{
		int k = 2 * n + 1;
		for (int i = 1; i <= n + 1; i++)
		{	
			for (int j = 1; j <=k-i ; j++)
			{
				printf(" ");
			}
			k--;
			for (int j = i; j > 0; j--)
			{
				printf("*");
			}
			printf("\n");
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < 2 * i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < n - i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}


int mainKH5FC() {
	int n = 2;
	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j>0; j--)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
}

int mainJHG18() {
	int n = 2;
	while (~scanf("%d", &n))
	{
		for (int i = n; i >0; i--)
		{
			for (int j = i-1; j > 0; j--)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
}



int mainJGC15() {
	int n = 5;
	while (~scanf("%d", &n))
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = n; j > 0; j--)
			{
				if (j == n + 1 - i || j == i)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
				
			}
			printf("\n");
		}
	}
		return 0;
}



int mainJHFD158() {
	int n = 5;
	while (~scanf("%d", &n))
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = n; j > 0; j--)
			{
				if (i==1||i==n||j==1||j==n)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}

			}
			printf("\n");
		}
	}
	return 0;
}



int mainJHCT158() {
	int n = 5;
	while (~scanf("%d", &n))
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j > 0; j--)
			{
				if (i == n)
				{
					printf("* ");
					continue;
				}
				
				if (j==1||j==i)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}

			}
			printf("\n");
		}
	}
	return 0;
}



int mainJGFX12() {
	int n = 5;
	while (~scanf("%d", &n))
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <=i ; j++)
			{
				printf("%d ",j);
			}
			printf("\n");
		}
	}
	return 0;
}

//Ê¥µ®Ê÷
int mainJFO57() {
	int n = 3;
	while (~scanf("%d", &n))
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= 6*n; j++)
			{
				if (j == 3 * n  - (i - 1) * 3)
				{
					for (int k = 0; k < i; k++)
					{
						printf("*     ");
						j += 5;
					}
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");

			for (int j = 1; j <= 6 * n; j++)
			{
				if (j == 3 * n - 1 - (i - 1) * 3)
				{
					for (int k = 0; k < i; k++)
					{
						printf("* *   ");
						j += 5;
					}
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");

			for (int j = 1; j <= 6 * n; j++)
			{
				if (j==3*n-2- (i-1)*3)
				{
					for (int k = 0; k < i; k++)
					{
						printf("* * * ");
						j += 5;
					}
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
			
		}

		for (int k = 0; k < n; k++)
		{
			for (int j = 1; j <= 3 * n; j++)
			{
				if (j == 3 * n)
				{
					printf("*\n");
				}
				else
				{
					printf(" ");
				}

			}
		}
	}
	return 0;
}


//³¬¼¶Ê¥µ®Ê÷
int main() {
	int n = 4;

		for (int i = 1; i <= n; i++)
		{
			int total =3* pow(2, n);
			for (int j = 1; j <= total; j++)
			{
				if (j == total /2 - (i - 1) * 3 || j == total / 2 + (i - 1) * 3)
				{

					printf("%d ",j);
					j ++;
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");

			for (int j = 1; j <= total; j++)
			{
				if (j == total / 2-1 - (i - 1) * 3 || j == total / 2-1 + (i - 1) * 3)
				{
					printf("* * ");
					j += 3;
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");

			for (int j = 1; j <= total; j++)
			{
				if (j == total / 2 - 2 - (i - 1) * 3 || j == total / 2 - 2 + (i - 1) * 3)
				{
					printf("* * * ");
					j += 5;
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");

		}
	return 0;
}