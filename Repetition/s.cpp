#include <stdio.h>

int main()
{
	long long int a, b, c, sum;
	scanf("%lld %lld", &a, &b);
	sum = 0;
	for (int i = 0; i < a; i++)
	{
		scanf("%lld", &c);
		if (b > c)
		{
			sum++;
		}
	}
	
	printf("%lld\n", sum);
	
	return 0;
}

