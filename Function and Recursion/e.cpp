#include<stdio.h>

int jum(int n[], int rep){
	if(rep <= 0) return 0;
	else return n[rep - 1] + jum(n, rep - 1);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		int rep;
		scanf("%d", &rep);
		int input[1000];
		for(int i = 0; i < rep; i++){
			scanf("%d", &input[i]);
		}
		int hasil = jum(input, rep);
		printf("Case #%d: %d\n", t, hasil);
	}
	return 0;
}
