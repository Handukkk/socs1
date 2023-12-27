#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n); getchar();
	for(int t = 1; t <= n; t++){
		char input[10000];
		scanf("%s", input);
		printf("Case #%d : ", t);
		for(int i = strlen(input) - 1; i >= 0; i--){
			printf("%c", input[i]);
		}
		puts("");
	}	
	return 0;
}
