#include <stdio.h>

int main ()
{
	
	int n, sum, a, b, nyu;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		
		sum = a;
		
		while (a >= b)
		{
			nyu = a / b;
			sum += nyu;
			a = nyu + (a % b);
		}
		
		printf("Case #%d: %d\n", i + 1, sum);
	}
	
	return 0;
}
