#include <stdio.h>

int main ()
{
	int rep;
	scanf("%d", &rep);
	int n, m, k, in, bgst;
	
	for (int t = 0; t < rep; t++)
	{
		scanf("%d %d %d", &n, &m, &k);
		bgst = k;
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &in);
			if (in <= m && in >= bgst)
			{
				bgst = in;
			}
		}
		printf("Case #%d: %d\n", t + 1, bgst);
		
	}
	
	
	return 0;
}
