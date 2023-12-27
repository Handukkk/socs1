#include <stdio.h>

int main()
{
	
	long long int n, o, a, b;
	scanf("%lld", &n);
	long long int prc[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &prc[i]);
	}
	scanf("%lld", &o);
	for (int i = 0; i < o; i++)
	{
		scanf("%d %d", &a, &b);
		prc[a - 1] = b;
		printf("Case #%d:", i + 1);
		for (int j = 0; j < n; j++)
		{
			printf(" %d", prc[j]);
		}
		printf("\n");
	}
	
	return 0;
}
