#include<stdio.h>
#include<string.h>

void rev(char n[], int rep){
	if(rep < 0) return;
	printf("%c", n[rep]);
	rev(n, rep - 1);
}

int main(){
	int n;
	scanf("%d", &n); getchar();
	for(int t = 1; t <= n; t++){
		char input[10000];
		scanf("%[^\n]", input); getchar();
		printf("Case #%d: ", t);
		rev(input, strlen(input) - 1);
//		printf('\0');
		puts("");
	}
	return 0;
}
