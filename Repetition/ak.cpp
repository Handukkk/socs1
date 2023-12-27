#include <stdio.h>

int main()
{
	// 1 2 1 1 2 3 4 1 2 3
	int jumlah;
	scanf("%d", &jumlah);
	int setTangga[jumlah + 1];
	int jumlahSet[10000];
	int sum;
	int awal;
	int index;
	int ind2;
	ind2 = 0;
	index = 0;
	awal = 0;
	sum = jumlah;
	
	for (int i = 0; i < jumlah; i++)
	{
		scanf("%d", &setTangga[i]);
	}
	
	setTangga[jumlah] = 1;
	
	while (sum > 0)
	{
		for (int i = awal; i < jumlah + 1; i++)
		{
			if(setTangga[i + 1] == 1)
			{
				jumlahSet[index] = setTangga[i];
				awal = i + 1;
				ind2++;
				break;
			}
		}
		sum--;
		index++;
	}
	
	for (int i = 0; i < ind2; i++)
	{
		printf("%d", jumlahSet[i]);
		if (i != ind2 - 1)
		{
			printf(" ");
		}
	}
	
	printf("\n");
	
	return 0;
}
