#include<stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		int a;
		scanf("%d", &a);
		char lili[101];
		char kunci[101];
		scanf("%s", lili);
		scanf("%s", kunci);
		int sum = 0;
		for(int j = 0; j < a; j++){
			if(lili[j] == kunci[j]){
				sum++;
			}
		}
//		printf("%d\n", sum);
		int hasil = (sum * 100) / a;
		printf("Case #%d: %d\n", i, hasil);
	}
	
	return 0;
}
