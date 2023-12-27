#include<stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int a = 1; a <= n; a++){
		
		int aw;
		scanf("%d", &aw);
		printf("Case #%d: ", a);
		for(int i = 0; i < aw; i++){
			printf("%c", 'a' + i);
		}
		puts("");
	}
	
	return 0;
}
