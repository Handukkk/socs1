#include <stdio.h>

int main()
{
	unsigned int n, jum;
	scanf("%ud", &n);
	unsigned int sum[n];
	jum = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%ud", &sum[i]);
		jum += sum[i];
		
		switch (jum)
		{
			case 12:
				jum = 28;
				break;
				
			case 35:
				jum = 7;
				break;
				
			case 30:
				jum = 10;
				break;	
		}
		
		if (jum >= 40)
		{
			jum -= 40;
		}
	}
	
	printf("%u\n", jum);
	
	
	return 0;
}
