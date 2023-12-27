#include <stdio.h>

int main()
{
	
	int n;
	scanf("%d", &n);
	
	for (int t = 0; t < n; t++)
	{
		long long int a, min, cal;
		scanf("%lld", &a);
		int in[a];
		min = 2000000001;
		for (int i = 0; i < a; i++)
		{
			scanf("%lld", &in[i]);
		}
		for (int i = 0; i < a; i++)
		{
			cal = in[i] - in[i + 1];
			if (cal < 0)
			{
				cal *= -1;
			}
			if (cal < min)
			{
				min = cal;
			}
		}
		
		printf("Case #%d: %d\n", t + 1, min);
		
	}
	return 0;
}
