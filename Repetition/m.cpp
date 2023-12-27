#include <stdio.h>

int main ()
{
	
	int n, o, duid, sum;
	scanf("%d", &n);
	int tot[o];
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		scanf("%d %d", &o, &duid);
		for (int j = 0; j < o; j++)
		{
			scanf("%d", &tot[j]);
			sum += tot[j];
		}
		if (sum <= duid)
		{
			printf("Case #%d: No worries\n", 1 + i);
		}
		else
		{
			printf("Case #%d: Wash dishes\n", 1 + i);
		}
	}
	
	return 0;
}
