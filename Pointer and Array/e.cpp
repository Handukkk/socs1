#include<stdio.h>

int main(){
	
	
	int n;
	scanf("%d", &n);
	
	for(int t = 1; t <= n; t++){
		int x;
		int mat[200][200];
		int sum = 0;
		scanf("%d", &x);
		
		for(int i = 0; i < x; i++){
			for(int j = 0; j < x; j++){
				scanf("%d", &mat[i][j]);
			}
		}
		
		printf("Case #%d:", t);
		
		for(int i = 0; i < x; i++){
			for(int j = 0; j < x; j++){
				sum += mat[j][i];
			}
			printf(" %d", sum);
			sum = 0;
		}
		puts("");
	}
	
	
	
	
	return 0;
}
