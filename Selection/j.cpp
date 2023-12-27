#include <stdio.h>

int main()
{
	int a, b, c, times;
	scanf("%d %d %d", &a, &b, &c);
	times = -1;
	
	for (int i = 0; i < 100; i++)
	{
		if (a + i == b - i && a + i == c)
		{
			times = i;
			break;
		}
	}
	
	printf("%d\n", times);
	
	return 0;
}
