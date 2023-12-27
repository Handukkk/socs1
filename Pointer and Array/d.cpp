#include<stdio.h>

int main(){
	
	int x, y;
	int garden[200][200];
	int howMuch;
	int newX, newY, newVal;
	scanf("%d %d", &y, &x);
	
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			scanf("%d", &garden[i][j]);
		}
	}
	
	scanf("%d", &howMuch);
	for(int a = 0; a < howMuch; a++){
		scanf("%d %d %d", &newY, &newX, &newVal);
		for(int i = 0; i < y; i++){
			for(int j = 0; j < x; j++){
				if(i == newY - 1 && j == newX - 1){
					garden[i][j] = newVal;
				}
			}
		}
	}
	
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			printf("%d",  garden[i][j]);
			if(j != x - 1){
				printf(" ");
			}
		}
		puts("");
	}
	
	return 0;
}
