#include <stdio.h>

int main ()
{
	
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		int max, jump, j, sum;
		max = 0, jump = 0, j = 1, sum = 0;
		scanf("%d", &max);
		
		while (jump < max)
		{
			jump += j;
			j++;
			sum++;
		}
		printf("Case #%d: %d\n", i + 1, sum);
	}
	
	return 0;
}
