#include<stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int t = 1; t <= n; t++){
		int x;
		long long int mat[200][200];
		long long int sum = 0;
		scanf("%d", &x);
		
		for(int i = 0; i < x; i++){
			for(int j = 0; j < x; j++){
				scanf("%lld", &mat[i][j]);
			}
		}
		
		printf("Case #%d:", t);
		
		for(int i = 0; i < x; i++){
			for(int j = 0; j < x; j++){
				sum += mat[j][i];
			}
			printf(" %lld", sum);
			sum = 0;
		}
		puts("");
	}
	
	return 0;
}
