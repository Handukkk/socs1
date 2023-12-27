#include <stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int a = 1; a <= n; a++){
		
		int s;
		scanf("%d", &s);
		
		for(int i = 0; i < s; i++){
			for(int j = s - 1; j > i; j--){
				printf(" ");
			}
			for(int j = 0; j <= 2 * i; j++){
				printf("*");
			}
			puts("");
		}
		
	}
	
	
	return 0;
}
