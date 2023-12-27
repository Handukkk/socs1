#include <stdio.h>

int main()
{
	
	long long int n, o;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &o);
		long long int map[o];
		long long int hv[o];
		long long int sum[o];
		for (int j = 0; j < o; j++)
		{
			scanf("%lld", &map[j]);
		}
		for (int j = 0; j < o; j++)
		{
			scanf("%lld", &hv[j]);
		}
		for (int j = 0; j < o; j++)
		{
			sum[j] = map[j] - hv[j];
		}
		printf("Case #%lld:", i + 1);
		for (int j = 0; j < o; j++)
		{
			printf(" %lld", sum[j]);
		}
		printf("\n");
	}
	
	return 0;
}
