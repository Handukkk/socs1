#include<stdio.h>

int notFibo(int f0, int f1, int a){
	if(a == 0) return f0;
	else if(a == 1) return f1;
	else return notFibo(f0, f1, a - 1) + notFibo(f0, f1, a - 2);
}

int main(){
	int f0, f1, a;
	scanf("%d %d" , &f0, &f1);
	scanf("%d", &a);
	printf("%d\n", notFibo(f0, f1, a));
	return 0;
}
