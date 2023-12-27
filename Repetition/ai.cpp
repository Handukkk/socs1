#include <stdio.h>

int main()
{
	
	int rep;
	scanf("%d", &rep);
	
	for (int t = 0; t < rep; t++)
	{
		int n;
		scanf("%d", &n);
		
		int input[n];
		int leftSum, rightSum, check;
		leftSum = 0, rightSum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &input[i]);
			rightSum += input[i];
		}
		
		check = 0;
		for (int i = 0; i < n; i++)
		{
			leftSum += input[i];
			rightSum -= input[i];
			
			if (leftSum == rightSum)
			{
				check = 1;
				break;
			}
		}
		
		if (check)
		{
			printf("Case #%d: Yes\n", t + 1);
		}
		else
		{
			printf("Case #%d: No\n", t + 1);
		}
	}
	
	return 0;
}
