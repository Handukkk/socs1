#include<stdio.h>

char map[10][10] = {
	{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
	{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
	{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
	{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
	{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
	{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
	{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
	{'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
};
	
bool isFound = false;

void move(int xkuda1, int ykuda1, int maxMove, int sum){
	if(xkuda1 < 0 || xkuda1 > 7 || ykuda1 < 0 || ykuda1 > 7 || sum == maxMove || map[ykuda1][xkuda1] == 'k') return;
	
	sum++;
	map[ykuda1][xkuda1] = 'k';
	
	//Kanan Bawah
	move(xkuda1 + 2, ykuda1 + 1, maxMove, sum);
	//Kanan Atas
	move(xkuda1 + 2, ykuda1 - 1, maxMove, sum);
	//Kiri Atas
	move(xkuda1 - 2, ykuda1 - 1, maxMove, sum);
	//Kiri Bawah
	move(xkuda1 - 2, ykuda1 + 1, maxMove, sum);
	
	//Bawah Kanan
	move(xkuda1 + 1, ykuda1 + 2, maxMove, sum);
	//Bawah Kiri
	move(xkuda1 - 1, ykuda1 + 2, maxMove, sum);
	//Atas Kiri
	move(xkuda1 - 1, ykuda1 - 2, maxMove, sum);
	//Atas Kanan
	move(xkuda1 + 1, ykuda1 - 2, maxMove, sum);
	
}

void move2(int xkuda1, int ykuda1, int maxMove, int sum ){
	if(xkuda1 < 0 || xkuda1 > 7 || ykuda1 < 0 || ykuda1 > 7 || sum == maxMove) return;
	
	if(map[ykuda1][xkuda1] == 'k'){
		isFound = true; 
		return;
	}
	sum++;
	
	//Kanan Bawah
	move2(xkuda1 + 2, ykuda1 + 1, maxMove, sum);
	//Kanan Atas
	move2(xkuda1 + 2, ykuda1 - 1, maxMove, sum);
	//Kiri Atas
	move2(xkuda1 - 2, ykuda1 - 1, maxMove, sum);
	//Kiri Bawah
	move2(xkuda1 - 2, ykuda1 + 1, maxMove, sum);
	
	//Bawah Kanan
	move2(xkuda1 + 1, ykuda1 + 2, maxMove, sum);
	//Bawah Kiri
	move2(xkuda1 - 1, ykuda1 + 2, maxMove, sum);
	//Atas Kiri
	move2(xkuda1 - 1, ykuda1 - 2, maxMove, sum);
	//Atas Kanan
	move2(xkuda1 + 1, ykuda1 - 2, maxMove, sum);
	
}

int main(){
	
	int n;
	scanf("%d", &n); getchar();
	for(int t = 1; t <= n; t++){
		int max;
		scanf("%d", &max); getchar();
		char x1, y1, x2, y2;
		scanf("%c%c %c%c", &x1, &y1, &x2, &y2); getchar();
		int xkuda1 = x1 - 'A';
		int ykuda1 = '8' - y1;
		int xkuda2 = x2 - 'A';
		int ykuda2 = '8' - y2;
		move(xkuda1, ykuda1, max, -1);
		move2(xkuda2, ykuda2, max, -1);
		if(isFound) printf("Case #%d: YES\n", t);
		else printf("Case #%d: NO\n", t);
		isFound = false;
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				map[i][j] = 'x';
			}
		}
	}
	
	return 0;
}
