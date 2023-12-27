#include <stdio.h>

int main()
{
	
	long long int n, o;
	scanf("%lld", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &o);
		long long int input[o];
		long long int sum;
		sum = 0;
		for (int j = 0; j < o; j++)
		{
			scanf("%lld", &input[j]);
			sum += input[j];
		}
		printf("Case #%d: %lld\n", i + 1, sum);
	}
	
	
	return 0;
}
