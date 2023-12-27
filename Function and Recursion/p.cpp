#include<stdio.h>

int jabo(int n){
	if(n == 0) return 0;
	if(n % 2 == 1) return 1;
	return jabo(n - 2) + jabo(n - 1);
}

int main(){
	int n;
	scanf("%d", &n);
	int hasil = jabo(n);
	printf("%d\n", hasil);
	return 0;
}
