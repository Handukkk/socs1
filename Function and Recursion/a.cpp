#include<stdio.h>

int sum = 0;

int f(int n){
	if(n % 3 == 0 && n != 0) sum++;
	
	if(n == 0) return 1;
	else if(n == 1) return 2;
	else if(n % 5 == 0) return n * 2;
	else return f(n - 1) + n + f(n - 2) + n - 2;	
}

int main(){
	
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		int input;
		scanf("%d", &input);
		int hasil = f(input);
		printf("Case #%d: %d %d\n", t, hasil, sum);
		sum = 0;
	}
	return 0;
}
