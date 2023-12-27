#include<stdio.h>

int fibo(int n, char a, char b){
	if(n == 0){
		printf("%c", a); 
		return 0;
	}
	if(n == 1){
		printf("%c", b); 
		return 1;
	}

	return fibo(n - 1, a, b) + fibo(n - 2, a, b);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		int val;
		char a, b;
		scanf("%d %c %c", &val, &a, &b);
		printf("Case #%d: ", t);
		fibo(val, a, b);
		puts("");
	}
	return 0;
}
