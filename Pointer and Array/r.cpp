#include<stdio.h>
#include<string.h>

int main(){
	
	int n;
	scanf("%d", &n); getchar();
	for(int t = 1; t <= n; t++){
		char input[10000];
		char a, b;
		int rep;
		scanf("%s", input); getchar();
		scanf("%d", &rep); getchar();
		for(int i = 0; i < rep; i++){
			scanf("%c %c", &a, &b); getchar();
			for(int i = 0; i < strlen(input); i++){
				if(input[i] == a) input[i] = b;
			}
		}
		
		printf("Case #%d: %s\n", t, input);
	}
	
	return  0;
}
