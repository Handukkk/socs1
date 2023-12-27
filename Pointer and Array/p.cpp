#include<stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	int room[n + 1][n + 1];
	int sum[n + 1] = {0};
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &room[i][j]);
			if(room[i][j] != 0){
				sum[room[i][j]]++;
			}
		}
	}
	int galengkap = 0;
	for(int i = 1; i <= n; i++){
		if(sum[i] < n){
			galengkap++;
		}
	}
	
	printf("%d\n", galengkap);
	
	return 0;
}
