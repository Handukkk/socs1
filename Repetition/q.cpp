#include <stdio.h>

int main ()
{
	
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		long long int a, b, sum;
		a = 0, b = 0;
		scanf("%lld %lld", &a, &b);
		
		long long int lipet;
		sum = 0;
		if (b <= a / 2)
		{
			lipet = 1;
			while (lipet <= b - 1)
			{
				lipet += 2;
				sum++;
			}
		}
		else
		{
			if (a % 2 == 0)
			{
				lipet = a;
				while (lipet >= b + 1)
				{
					lipet -= 2;
					sum++;
				}
			}
			else
			{
				lipet = a - 1;
				while (lipet >= b + 1)
				{
					lipet -= 2;
					sum++;
				}
			}
		}
		
		printf("Case #%d: %lld\n", i + 1, sum);
	}
	
	return 0;
}
