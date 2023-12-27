#include <stdio.h>

int main()
{
	
	int n;
	scanf("%d", &n);
	n %= 2;
	
	if (n == 1)
	{
		printf("ODD\n");
	}
	else
	{
		printf("EVEN\n");
	}
	
	return 0;
}
