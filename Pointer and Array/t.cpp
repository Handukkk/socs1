#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		char impuy[1001];
		char change[1001] = {0};
		scanf("%s", impuy);
		int idx = 0;
		for(int i = 0; impuy[i] != 0; i++){
			if(impuy[i] >= 'A' && impuy[i] <= 'D'){
				change[i] = impuy[i] - 'A';
				impuy[i] = 'A';
			}else if(impuy[i] >= 'E' && impuy[i] <= 'H'){
				change[i] = impuy[i] - 'E';
				impuy[i] = 'E';
			}else if(impuy[i] >= 'I' && impuy[i] <= 'N'){
				change[i] = impuy[i] - 'I';
				impuy[i] = 'I';
			}else if(impuy[i] >= 'O' && impuy[i] <= 'T'){
				change[i] = impuy[i] - 'O';
				impuy[i] = 'O';
			}else if(impuy[i] >= 'U' && impuy[i] <= 'Z'){
				change[i] = impuy[i] - 'U';
				impuy[i] = 'U';
			}
			idx++;
		}
		printf("Case #%d:\n", t);
		printf("%s\n", impuy);
		for(int i = 0; i < idx; i++){
			printf("%d", change[i]);
		}
		puts("");
	}
	return 0;
}
