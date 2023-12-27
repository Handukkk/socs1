//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	
//	for (int l = 0; l < n; l++)
//	{
//		int a, b, len;
//		char c[11000];
//		int sum1, sum, mus, life;
//		life = 1;
//		sum1 = 0;
//		sum = 0;
//		mus = 0;
//		scanf("%d %d", &a, &b);
//		scanf("%s", &c);
//		len = strlen(c);
//		
//		for (int i = 0; i < strlen(c); i++)
//		{
//			if(c[i] == '1')
//			{
//				sum1++;
//			}
//		}
//		
//		if (sum1 <= 1 && b <= len)
//		{
//			life = 0;
//		}
//		else
//		{
//			for (int j = 0; j < len; j++)
//			{
//				sum++;
//				if (c[j] == '1')
//				{
//					sum--;
//					break;
//				}
//			}
//			
//			for (int j = len - 1; j >= 0; j--)
//			{
//				mus++;
//				if (c[j] == '1')
//				{
//					mus--;
//					break;
//				}
//			}
//			
//			if (sum >= b || mus >= b)
//			{
//				life = 0;
//			}
//			else
//			{
//				life = 1;
//			}
//		}
//		
////		printf("%d %d\n", sum, mus);
//		
//		if (life == 1)
//		{
//			printf("Case #%d: Alive\n", l + 1);
//		}
//		else
//		{
//			printf("Case #%d: Dead\n", l + 1);
//		}
//	}
//	
//	return 0;
//}







#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	for (int l = 0; l < n; l++)
	{
		int a, b, len;
		char c[11000];
		int sum1, sum, mus, life;
		life = 1;
		sum1 = 0;
		sum = 0;
		mus = 0;
		scanf("%d %d", &a, &b);
		scanf("%s", &c);
		len = a;
		
		for (int i = 0; i < len; i++)
		{
			if(c[i] == '1')
			{
				sum1++;
			}
		}
		
		for (int j = 0; j < len; j++)
		{
			sum++;
			if (c[j] == '1')
			{
				sum--;
				break;
			}
		}
			
		for (int j = len - 1; j >= 0; j--)
		{
			mus++;
			if (c[j] == '1')
			{
				mus--;
				break;
			}
		}

//		printf("%d %d %d %d", sum1, sum, mus, len);
		if (sum1 <= 1)
		{
			if (b < len)
			{
				life = 0;
			}
			else
			{
				life = 1;
			}
		}
		else if (b <= sum || b <= mus)
		{
			life = 0;
		}
		else
		{
			life = 1;
		}
		
		if (life == 1)
		{
			printf("Case #%d: Alive\n", l + 1);
		}
		else
		{
			printf("Case #%d: Dead\n", l + 1);
		}
	}
	
	return 0;
}
