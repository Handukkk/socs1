#include <stdio.h>

int main()
{
	int rep;
	scanf("%d", &rep);
	
	for (int t = 0; t < rep; t++)
	{
		int input, sum;
		scanf("%d", &input);
		sum = 1;
		
		printf("Case %d:", t + 1);
		for (int i = 0; i < input; i++)
		{
			printf(" %d", sum += i);
		}
		printf("\n");
	}
	
	return 0;
}
