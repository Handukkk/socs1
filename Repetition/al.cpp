#include<stdio.h>

int main()
{
	
	int jumlahPedang, jumlahNaga;	
	scanf("%d %d", &jumlahPedang, &jumlahNaga);
	long long int damagePedang, nyawaNaga;
	long long int maxPedang, maxNaga;
	
	maxPedang = 0;
	maxNaga = 0;
	for (int i = 0; i < jumlahPedang; i++)
	{
		scanf("%lld", &damagePedang);
		if (damagePedang >= maxPedang)
		{
			maxPedang = damagePedang;
		}
	}
	
	for (int i = 0; i < jumlahNaga; i++)
	{
		scanf("%lld", &nyawaNaga);
		if (nyawaNaga >= maxNaga)
		{
			maxNaga = nyawaNaga;
		}
	}
	
	if (maxPedang > maxNaga)
	{
		puts("The dark secret was true");
	}
	else
	{
		puts("Secret debunked");
	}
	
	return 0;
}
