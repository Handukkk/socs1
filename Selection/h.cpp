#include <stdio.h>

int main()
{
	char a, b, c;
	scanf("%c %c %c", &a, &b, &c);
	
	if (a < b && a < c)
	{
		printf("1 ");
		if (b < c)
		{
			printf("2 3\n");
		}
		else if (c < b)
		{
			printf("3 2\n");
		}
	}
	else if (b < a && b < c)
	{
		printf("2 ");
		if (a < c)
		{
			printf("1 3\n");
		}
		else if (c < a)
		{
			printf("3 1\n");
		}
	}
	else if (c < a && c < b)
	{
		printf("3 ");
		if (a < b)
		{
			printf("1 2\n");
		}
		else if (b < a)
		{
			printf("2 1\n");
		}
	}
	
	return 0;
}
