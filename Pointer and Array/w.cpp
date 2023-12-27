#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		int rep;
		int point[205] = {0};
		int input[205];
		int sum = 0;
		bool isFound = false;
		scanf("%d", &rep);
		for(int i = 0; i < rep; i++){
			scanf("%d", &input[i]);
		}
		for(int i = 0; i < rep; i++){
			for(int j = 0; j < rep; j++){
				for(int k = 0; k < rep; k++){
					if(input[i] == input[j] + input[k] && j != k && i != k) {sum++; isFound = true; break;}
				}
				if(isFound){isFound = false; break;}
			}
		}
//		for(int i = 0; i < 205; i++){
//			if(point[i] > 0) sum++;
////			printf("%d: %d | ", i,point[i]);
//		}
		printf("Case #%d: %d\n", t, sum);
	}	
	return 0;
}
