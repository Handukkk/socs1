#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int a, b, big;
		int jum[10000] = {0};
		scanf("%d", &a);
		big = 0;
		for(int j = 0; j < a; j++){
			scanf("%d", &b);
			jum[b]++;
			if(b >= big){
				big = b;
			}
		}
		printf("Case #%d: %d\n", i, jum[big]);
	}
	return 0;
}
