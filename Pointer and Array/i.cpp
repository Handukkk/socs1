#include<stdio.h>

int main(){
	
	int n;
	scanf("%d", &n); getchar();
	
	for(int t = 1; t <= n; t++){
		int size;
		scanf("%d", &size); getchar();
		long long int input[size];
		for(int i = 0; i < size; i++){
			scanf("%lld", &input[i]); getchar();
		}
		printf("Case #%d:", t);
		for(int i = size - 1; i >= 0; i--){
			printf(" %lld", input[i]);
		}
		puts("");
	}
	
	return 0;
}
