#include <stdio.h>

int main ()
{
	
	int n, sum, a;
	scanf("%d", &n);
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	
	printf("%d\n", sum);
	
	return 0;
}
