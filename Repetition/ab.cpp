#include <stdio.h>

int main()
{
	
	int n, tot, a, b, c, d, buang;
	buang = 0;
	scanf("%d", &n);
	
	for (int j = 0; j < n; j++)
	{
		scanf("%d %d %d %d %d", &tot, &a, &b, &c, &d);
		for (int i = 1; i <= tot; i++)
		{
			if (i % a == 0 || i % b == 0 || i % c == 0 || i % d == 0)
			{
				buang++;
			}
		}
		
		printf("Case #%d: %d\n", j + 1, buang);
		tot = 0; a = 0; b = 0; c = 0; d = 0; buang = 0;
	}
	
	return 0;
}
