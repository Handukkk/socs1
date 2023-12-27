#include <stdio.h>

int main()
{
	
	long long int n, o, p, sum;
	scanf("%lld", &n);
	sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%lld %lld", &o, &p);
		long long int mat[p];
		for (int j = 0; j < o; j++)
		{
			for (int k = 0; k < p; k++)
			{
				scanf("%lld", &mat[k]);
			}
			
			for (int k = 0; k < p; k++)
			{
				for(int l = k + 1; l < p;l ++)
				{
					int temp;
					if (mat[k] > mat[l])
					{
						temp = mat[k];
						mat[k] = mat[l];
						mat[l] = temp;
					}
				}
			}
			
			sum += mat[p-1];
		}
		
		printf("Case #%lld: %lld\n", i + 1, sum);
		sum = 0;
	}
	
	
	return 0;
}
