#include<stdio.h>

long long int jonaci(long long int a, long long int b, long long int c){
	if(c == 0) return a;
	else if(c == 1) return b;
	
	return jonaci(a, b, c - 1) - jonaci(a, b, c - 2);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		long long int a, b, c;
		scanf("%lld %lld %lld", &c, &a, &b);
		long long int hasil = jonaci(a, b, c);
		printf("Case #%d: %lld\n", t, hasil);
	}
	return 0;
}
