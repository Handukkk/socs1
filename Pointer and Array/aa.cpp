#include <stdio.h>

int main()
{
	int n, uRoom, happy;
	scanf("%d", &n);
	long long int room[n];
	
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &room[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int temp;
			if (room[i] > room[j])
			{
				temp = room[i];
				room[i] = room[j];
				room[j] = temp;
			}
		}
	}
	
	uRoom = -1;
	happy = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (room[i] != uRoom)
		{
			happy++;
			uRoom = room[i];
		}
	}
	
	printf("%d\n", happy);
	
	return 0;
}
