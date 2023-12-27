#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int a, b, odd, even;
		odd = 0, even = 0;		
		scanf("%d", &a);
		
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &b);
			if (b % 2 == 0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
		
		printf("Odd group : %d integer(s).\n", odd);
		printf("Even group : %d integer(s).\n\n", even);
	}

	return 0;
}

//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		int a, b[1000], odd, even;
//		odd = 0, even = 0;		
//		scanf("%d", &a);
//		
//		for (int j = 0; j < a; j++)
//		{
//			scanf("%d", &b[j]);
//		}
//		
//		for (int j = 0; j < a; j++)
//		{
//			if (b[j] % 2 == 0)
//			{
//				even++;
//			}
//			else
//			{
//				odd++;
//			}
//		}
//		
//		printf("Odd group : %d integer(s).\n", odd);
//		printf("Even group : %d integer(s).\n", even);
//		
//		//Odd group : 5 integer(s).
//		//Even group : 5 integer(s).
//	}
//
//	return 0;
//}

