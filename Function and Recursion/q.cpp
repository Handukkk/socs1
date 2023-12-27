#include<stdio.h>

int sum = 100;

void move(int xhorse, int yhorse, int xt, int yt, int localSum){
	if(xhorse < 0 || xhorse > 7 || yhorse < 0 || yhorse > 7 || localSum == 8) return;
	if(xhorse == xt && yhorse == yt){
		if(localSum < sum){
			sum = localSum;
		}
		return;
	}
	
	localSum++;
	
	//Kanan Bawah
	move(xhorse + 2, yhorse + 1, xt, yt, localSum);
	//Kanan Atas
	move(xhorse + 2, yhorse - 1, xt, yt, localSum);
	//Kiri Atas
	move(xhorse - 2, yhorse - 1, xt, yt, localSum);
	//Kiri Bawah
	move(xhorse - 2, yhorse + 1, xt, yt, localSum);
	
	//Bawah Kanan
	move(xhorse - 1, yhorse + 2, xt, yt, localSum);
	//Bawah Kiri
	move(xhorse - 1, yhorse - 2, xt, yt, localSum);
	//Atas Kiri
	move(xhorse + 1, yhorse - 2, xt, yt, localSum);
	//Atas Kanan
	move(xhorse + 1, yhorse + 2, xt, yt, localSum);
	
}

int main(){
	
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		char awal[3], ahkir[3];
		int xAwal, xAhkir;
		int yAwal, yAhkir;
		scanf("%s %s", awal, ahkir);
		xAwal = awal[0] - 'A'; xAhkir = ahkir[0] - 'A';
		yAwal = '8' - awal[1]; yAhkir = '8' - ahkir[1];
		move(xAwal, yAwal, xAhkir, yAhkir, 0);
		printf("Case #%d: %d\n", t, sum);
		sum = 100;
//		printf("%d %d\n", xAwal, yAwal);
//		printf("%d %d", xAhkir, yAhkir);
	}
	
	return 0;
}
