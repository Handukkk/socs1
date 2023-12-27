#include<stdio.h>

int atob(int a, int b){
	if(a == b) return 1;
	if(a == 1) return 0;
	else if(a % 2 == 0) return atob(a / 2, b);
	else if(a % 2 == 1) return atob((a * 3) + 1, b);
}

int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int t  = 1; t <= n; t++){
		int a, b;
		scanf("%d %d", &a, &b);
		int hasil = atob(a, b);
		if(hasil) printf("Case #%d: YES\n", t);
		else printf("Case #%d: NO\n", t);
	}
	
	return 0;
}
