#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	for (int z = 0; z < n; z++)
	{
		int o;
		int m1[100][100];
		int m2[100][100];
		int m3[100][100];
		int sum[100][100];
		int sum2[100][100];
		scanf("%d", &o);
		
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				scanf("%d", &m1[i][j]);
			}
		}
		
		
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				scanf("%d", &m2[i][j]);
			}
		}
		
		
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				scanf("%d", &m3[i][j]);
			}
		}
		
		
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				sum[i][j] = 0;
				sum2[i][j] = 0;
			}
		}
		
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				for(int k = 0; k < o; k++)
				{
					sum[i][j] += m1[i][k] * m2[k][j];
				}
			}
		}
		
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				for(int k = 0; k < o; k++)
				{
					sum2[i][j] += sum[i][k] * m3[k][j];
				}
			}
		}
		
		printf("Case #%d:\n", z + 1);
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				printf("%d", sum2[i][j]);
				if (j < o - 1)
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		
	}
	
	return 0;
}
