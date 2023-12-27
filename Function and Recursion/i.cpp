#include<stdio.h>

int sum = 0;

int fibo(int n){
	sum++;
	if(n == 1) return 1;
	if(n == 0) return 0;
	
	return fibo(n - 2) + fibo(n - 1);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		int val;
		scanf("%d", &val);
		fibo(val);
		printf("Case #%d: %d", t, sum);
		sum = 0;
		puts("");
	}
	return 0;
}
