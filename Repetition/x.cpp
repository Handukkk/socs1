#include <stdio.h>

int main()
{
	int n, sum;
	scanf("%d", &n);
	sum = 1;
	for (int i = 0; i < n; i++)
	{
		sum *= 2;
		sum += 1;
	}
	
	printf("%d\n", sum);
	return 0;
}
