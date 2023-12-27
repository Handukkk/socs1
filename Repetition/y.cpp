#include <stdio.h>

int main()
{
	int n, a, b;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		
		printf("Case #%d:\n", i + 1);
		
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < b; k++)
			{
				if(j == 0 || j == a - 1 || k == 0 || k == b - 1)
				{
					printf("#");
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
