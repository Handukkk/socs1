#include <stdio.h>


int main()
{
	int n, sum;
	scanf("%d", &n);
	int in[n];
	sum = 0;
	
	for (int i = 0; i < n; i ++)
	{
		scanf("%d", &in[i]);
		sum += in[i];
	}
	
	printf("%d\n", sum);
	
	return 0;
}
