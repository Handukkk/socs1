#include<stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		int len, napas;
		scanf("%d %d", &len, &napas);
		char lorong[len + 1];
		scanf("%s", lorong);
		int jumSatu = 0;
		int nolSblmSatu = 0, nolSdhSatu = 0;
		for(int i = 0; i < len; i++){
			if(lorong[i] == '1') jumSatu++;
		}
		for(int i = 0; i < len; i++){
			if(lorong[i] == '1') break;
			nolSblmSatu++;
		}
		for(int i = len - 1; i >= 0; i--){
			if(lorong[i] == '1') break;
			nolSdhSatu++;
		}
		bool isAlive = true;
		if(jumSatu <= 1){
			if(napas < len) isAlive = false;
			else isAlive = true;
		}else if(napas <= nolSblmSatu || napas <= nolSdhSatu){
			isAlive = false;
		} else isAlive = true;
		
		if(isAlive) printf("Case #%d: Alive\n", t);
		else printf("Case #%d: Dead\n", t);
	}
	return 0;
}
