#include <stdio.h>

int main(){
	
	int n, o;
	scanf("%d %d", &n, &o);
	
	for(int i = 0; i < n; i++){
		for(int a = 0; a < o; a++){
			for(int b = 0; b < o; b++){
				if(a >= o - 1 - b){
					printf("*");
				}else{
					printf(" ");
				}
			}
			puts("");
		}
	}
	
	return 0;
}
