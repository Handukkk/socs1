#include <stdio.h>

int main()
{
	int rep;
	long long input;
	scanf("%d", &rep);
	
	for (int i = 0; i < rep; i++)
	{
	
		scanf("%lld", &input);
		
		
		printf("Case #%d:\n", i + 1);
		for (int j = 1; j <= input; j++)
		{
			
			if ((j % 3 == 0 || j % 5 == 0) && (j % 15 != 0))
			{
				printf("%d Jojo\n", j);
			}
			else
			{
				printf("%d Lili\n", j);
			}
			
		}
		
	}
}
