#include <stdio.h>

int main()
{
	
	int n, x, p, sum;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &p);
		sum = (x >> p) & 1;
		printf("%d\n", sum);
	}
	
	
	return 0;
}
