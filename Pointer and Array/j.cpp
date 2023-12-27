#include<stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int t=1;t<=n;t++){
		char in[10000];
		scanf("%s",in);
		printf("Case %d: ", t);
		for(int i=0;in[i]!='\0';i++){printf("%d", in[i]); if(in[i+1]!='\0') printf("-");}
		puts("");
	}
	
	return 0;
}
