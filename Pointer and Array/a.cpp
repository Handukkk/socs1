#include <stdio.h>

int main()
{
	int n, o, a, b, sum;
	scanf("%d", &n);
	int view[n];
	
	sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &view[i]);
	}
	
	scanf("%d", &o);
	
	for (int i = 0; i < o; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = a; j <= b; j++)
		{
			sum += view[j - 1];
		}
		printf("Case #%d: %d\n", i + 1, sum);
		sum = 0;
	}
	
	return 0;
}
