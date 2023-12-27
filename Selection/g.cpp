#include <stdio.h>

int main()
{
	
	long long int a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	
	if ((a * b) == (c - d))
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	
	
	return 0;
}

//#include <stdio.h>
//int main(){
//    int a,b,c,d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    int re = a * b;
//    int su = c - d;
//    printf((re == su)? "True\n" : "False\n");
//
//    return 0;
//}
