#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		int in[7];
		for(int j = 0; j < 6; j++){
			scanf("%d", &in[j]);
		}
		
		printf("Case #%d: ", i);
		for(int j = 0; j < in[0]; j++){
			printf("a");
		}
		
		for(int j = 0; j < in[1]; j++){
			printf("s");
		}
		
		for(int j = 0; j < in[2]; j++){
			printf("h");
		}
		
		for(int j = 0; j < in[3]; j++){
			printf("i");
		}
		
		for(int j = 0; j < in[4]; j++){
			printf("a");
		}
		
		for(int j = 0; j < in[5]; j++){
			printf("p");
		}
		
		puts("");
	}
	
	return 0;
}
