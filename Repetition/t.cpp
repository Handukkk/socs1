#include <stdio.h>

int main()
{
	int n, sum;
	scanf("%d", &n);
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		
		if (c >= a && c < b)
		{
			sum++;
		}
	}
	
	printf("%d\n", sum);

	return 0;
}

