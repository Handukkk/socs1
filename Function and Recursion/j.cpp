#include<stdio.h>

int sum = 0;

int play(long long int n){
	sum++;
	if(n == 1) return sum % 2;
	if(n % 2 == 0) return play(n / 2);
	else return play(n * 3 + 1);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		long long int in;
		scanf("%lld", &in);
		int hasil = play(in);
		if(hasil) printf("Case #%d: Lili\n", t);
		else printf("Case #%d: Jojo\n", t);
		sum = 0;
	}
	return 0;
}
