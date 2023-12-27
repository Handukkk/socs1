#include <stdio.h>

void genap(int a)
{
	for(int i = 0; i < a; i++)
	{
		for (int j = a; j > (i + 1); j--)
		{
			printf(" ");
		}
		
		for (int j = 0; j <= i; j++)
		{
			if (j % 2 == 0)
			{
				printf("#");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}


void ganjil(int a)
{
	for(int i = 0; i < a; i++)
	{
		for (int j = a; j > (i + 1); j--)
		{
			printf(" ");
		}
		
		for (int j = 0; j <= i; j++)
		{
			if (j % 2 == 0)
			{
				printf("*");
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}
}
int main()
{
	int n, a;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a % 2 == 0)
		{
			printf("Case #%d:\n", i + 1);
			genap(a);	
		}
		else
		{
			printf("Case #%d:\n", i + 1);	
			ganjil(a);
		}
	}
	
	return 0;
}
