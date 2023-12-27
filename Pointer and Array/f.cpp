#include<stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int t = 1; t <= n; t++){
		char str[100000];
		int check[26] = {0};
		int jumjum = 0;
		scanf("%s", str);
		for(int i = 0; str[i] != '\0'; i++){
			check[str[i] - 'a']++;
		}
		for(int i = 0; i < 26; i++){
			if(check[i] > 0) jumjum++;
		}
		if(jumjum % 2 == 0) printf("Case #%d: Yay\n", t);
		else printf("Case #%d: Ewwww\n", t);
	}
	
	return 0;
}
