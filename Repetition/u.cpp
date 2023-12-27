#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int a, bibi, lili;
		scanf("%d", &a);
		char in[101];
		scanf("%s", in);
		bibi = 0; lili = 0;
		for (int j = 0; j < a; j++)
		{
			if (in[j] == 'B')
			{
				bibi++;
			}
			else if (in[j] == 'L')
			{
				lili++;
			}
			else if (in[j] == 'T')
			{
				lili++;
				bibi++;
			}
		}
		if (bibi > lili)
		{
			printf("Bibi\n");
		}
		else if (lili > bibi)
		{
			printf("Lili\n");
		}
		else if (lili == bibi)
		{
			printf("None\n");
		}
	}

	return 0;
}


