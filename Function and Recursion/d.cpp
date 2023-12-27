#include<stdio.h>

int f(int n){
	if(n == 1) return 1;
	else if(n % 2 == 1) return f(n - 1) + f(n + 1);
	else if(n % 2 == 0) return f(n / 2);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		int input;
		scanf("%d", &input);
		int hasil = f(input);
		printf("Case #%d: %d\n", t, hasil);
	}
	return 0;
}
