#include <stdio.h>

int main()
{
	
	int n, j, l, b, sum, rata;
	int peserta;
	scanf("%d", &n);
	sum = 0;
	scanf("%d %d %d", &j, &l, &b);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &peserta);
		sum += peserta;
	}
	
	rata = (j + l + b + sum) / (n + 3);
	
	if (j >= rata)
	{
		printf("Jojo lolos\n");
	}
	else
	{
		printf("Jojo tidak lolos\n");
	}
	
	if (l >= rata)
	{
		printf("Lili lolos\n");
	}
	else
	{
		printf("Lili tidak lolos\n");
	}
	
	if (b >= rata)
	{
		printf("Bibi lolos\n");
	}
	else
	{
		printf("Bibi tidak lolos\n");
	}
	
	
	return 0;
}
