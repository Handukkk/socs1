#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);
		
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < a; k++)
			{
				if (j == k || j == a - 1 - k || j == 0 | j == a - 1 || k == 0 || k == a - 1)
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
		printf("\n");
	}

	return 0;
}
