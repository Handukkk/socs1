#include <stdio.h>


int main()
{
	int n, o, p;
	scanf("%d %d", &n, &o);
	p = o;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("#");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (int i = 0; i < n; i++)
	{
		if (i == p - 1)
		{
			for (int j = 0; j < n; j++)
			{
				printf("#");
			}
			p += o;
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				printf(".");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	p = o;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == p - 1)
			{
				printf("#");
				p += o;
			}
			else
			{
				printf(".");
			}
		}
		p = o;
		printf("\n");
	}
	
	
	return 0;
}
