#include <stdio.h>

int main()
{
	
	int rep;
	scanf("%d", &rep);
	
	for (int i = 0; i < rep; i++)
	{
		int jumlah;
		char awal[1001];
		char ahkir[1001];
		int index = 0;
		scanf("%d", &jumlah);
		getchar();
		scanf("%[^\n]", awal);
		getchar();
		
		index = 0;
		for (int j = 0; j < jumlah; j++)
		{
			if (awal[j] >= 'A' && awal[j] <= 'Z' || awal[j] >= 'a' && awal[j] <= 'z')
			{
				ahkir[index] = awal[j];
//				printf("%s\n", ahkir);
				index++;
			}
			else
			{
//				puts("skipped");
				continue;
			}
		}
//		printf("%d\n", index);
//		ahkir[index] = '\0';
		index = 0;
		
		printf("Case #%d: %s\n", i + 1, ahkir);
		
		for (int j = 0; j < jumlah; j++)
		{
			ahkir[j] = '\0';
		}
	}
	
	return 0;
}
