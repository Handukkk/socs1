#include <stdio.h>

int main ()
{
	int rep;
	scanf("%d", &rep);
	long long int n, m, in, bgst, sum;
	
	for (int t = 0; t < rep; t++)
	{
		scanf("%lld %lld", &n, &m);
		bgst = 1000000000;
		for (int j = 0; j < n; j++)
		{
			scanf("%lld", &in);
			if (in <= bgst)
			{
				bgst = in;
			}
		}
		if (bgst >= m)
		{
			sum = 0;
		}
		else
		{
			sum = m / bgst;
		}
		printf("Case #%d: %lld\n", t + 1, sum);
		
	}
	
	
	return 0;
}
