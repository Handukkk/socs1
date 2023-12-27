#include <stdio.h>

int main()
{
	int n;
	long long int a, b, c;
	double div;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%lld %lld %lld", &a, &b, &c);
		div = (double) b / 100 * a;
//		printf("%lf", div);
		if (div >= c)
		{
			printf("Case #%d: %lld\n", i + 1, c);
		}
		else
		{
			printf("Case #%d: %.0lf\n", i + 1, div);
		}
	}
	
	
	
	return 0;
}
