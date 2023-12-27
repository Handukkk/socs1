#include <stdio.h>

int main()
{
	
	long long int d, s, t;
	scanf("%lld %lld %lld", &d, &s, &t);
	
	if (d > s && d > t)
	{
		printf("Daging\n");
		if (s > t)
		{
			printf("Sayur\nTelur\n");
		}
		else if (t > s)
		{
			printf("Telur\nSayur\n");
		}
	}
	else if (s > d && s > t)
	{
		printf("Sayur\n");
		if (d > t)
		{
			printf("Daging\nTelur\n");
		}
		else if (t > d)
		{
			printf("Telur\nDaging\n");
		}
	}
	else if (t > d && t > s)
	{
		printf("Telur\n");
		if (d > s)
		{
			printf("Daging\nSayur\n");
		}
		else if (s > d)
		{
			printf("Sayur\nDaging\n");
		}
	}
	
	
	return 0;
}
