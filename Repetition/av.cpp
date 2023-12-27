#include <stdio.h>

int main(){
	
	int n;
	int sum = 0;
	scanf("%d", &n);
	
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n; j++){
			int a = n - (i + j);
			if(a >= 0){
				sum++;
			}
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
