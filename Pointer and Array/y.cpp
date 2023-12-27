#include<stdio.h>
#include<string.h>

int main(){
	
	int n;
	scanf("%d", &n); getchar();
	
	for(int t = 1; t <= n; t++){
		
		int howMuch;
		char in[1000];
		char tampung[1000];
		int idx = 0;
		int a, b;
		scanf("%d %s", &howMuch, in);
		
		for(int i = 0; i < howMuch; i++){
			scanf("%d %d", &a, &b);
			for(int j = 0; j < strlen(in); j++){
				if(j == a - 1){
					for(int k = a - 1; k <= b - 1; k++){
						tampung[idx] = in[k];
						idx++;
					}
					idx--;
					for(int k = a - 1; k <= b - 1; k++){
						in[k] = tampung[idx];
						idx--;
					}
				}
			}
			idx = 0;
		}
		
		printf("Case #%d: %s\n", t, in);
		
	}
	
	return 0;
}
