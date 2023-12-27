//#include <stdio.h>
//
//int main()
//{
//	
//	int rep;
//	long long int input
//	scanf("%d", &rep);
//	getchar();
//	for (int t = 0; t < rep; t++)
//	{
//		scanf("%lld", &input);
//		getchar();
//		int sum;
//		if (input > 1)
//		{
//			sum = 1;
//		}
//		else if (input >= 10)
//		{
//			sum = 2;
//		}	
//		else if (input >= 100)
//		{
//			sum = 3;
//		}
//		else if (input >= 1000)
//		{
//			sum = 4;
//		}
//		else if (input >= 10000)
//		{
//			sum = 5;
//		}
//		
//		printf("Case #%d: %d", t + 1, sum);
//	}
//	
//	return 0;
//}

#include <stdio.h>

int main()
{
	
	int rep;
	long long int input;
	scanf("%d", &rep);
	getchar();
	for (int t = 0; t < rep; t++)
	{
		scanf("%lld", &input);
		getchar();
		int sum;
		sum = 0;
		while (input > 0)
		{
			input /= 10;
			sum++;
		}
		
		printf("Case #%d: %d\n", t + 1, sum);
	}
	
	return 0;
}
