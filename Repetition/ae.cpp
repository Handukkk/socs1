#include <stdio.h>

int main()
{
	
	int n;
	scanf("%d",&n);
	double jari, tinggi, lAlas, keliling, lSamping;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%lf %lf", &jari, &tinggi);
		lAlas = (jari * jari) * (double)3.14;
		keliling = (double)3.14 * (jari + jari);
		lSamping = keliling * tinggi;
		printf("Case #%d: %.2lf\n", i + 1, (2 * lAlas) + lSamping);
	}
	
	return 0;
}
