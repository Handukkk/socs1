#include <stdio.h>

int main()
{
	
	long long int n, a, b;
	scanf("%lld", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%lld %lld", &a, &b);
		if ((a * b) % 2 == 1)
		{
			printf("Case #%d: Need more frogs\n", i + 1);
		}
		else
		{
			printf("Case #%d: Party time!\n", i + 1);
		}
	}
	
	
	return 0;
}
