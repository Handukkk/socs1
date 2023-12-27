#include <stdio.h>

int calc(int a)
{
	int sum;
	sum = 0;
	
	while (a)
	{
		sum += a & 1;
		a >>= 1;
	}
	
	return sum;
}

int main()
{
	
	int rep;
	scanf("%d", &rep);
	
	for (int t = 0; t < rep; t++)
	{
		int n;
		scanf("%d", &n);
		int input[n];
		
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &input[i]);
		}
		
		int moreThen3;
		int lessThen3;
		moreThen3 = 0, lessThen3 = 0;
		
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				int xorResult, bitSum;
				xorResult = input[i] ^ input[j];
				bitSum = calc(xorResult);
				
				if (bitSum >= 3)
				{
					moreThen3++;
				}
				else
				{
					lessThen3++;
				}
			}
		}
		
		printf("Case #%d: %d %d\n", t + 1, moreThen3, lessThen3);
		
	}
	
	
	
	return 0;
}
