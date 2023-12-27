#include <stdio.h>

int main()
{
	
	int rep;
	scanf("%d", &rep);
	
	int input[2000] = {0};
	int inputValue, sum;
	
	for (int i = 0; i < rep; i++)
	{
		scanf("%d", &inputValue);
		input[inputValue]++;
	}
	
	sum = 0;
	
	for (int i = 0; i < 1000; i++)
	{
		if (input[i + 1] >= sum)
		{
			sum = input[i + 1];
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
