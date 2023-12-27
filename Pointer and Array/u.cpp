#include<stdio.h>

int main(){
	int rep;
	scanf("%d", &rep);
	for(int tc = 1; tc <= rep; tc++){
		int n, bibi, lili;
		int arr[1001];
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d", &arr[i]);
		}
		scanf("%d %d", &bibi, &lili);
		if(arr[bibi - 1] > arr[lili -1]) printf("Case #%d : Bibi\n", tc);
		else if(arr[lili - 1] > arr[bibi - 1]) printf("Case #%d : Lili\n", tc);
		else printf("Case #%d : Draw\n", tc);
	}
}

//3
//10
//1 2 3 4 5 6 7 8 9 10
//3 5
//8
//1 1 1 1 1 1 1 1
//7 6
//5
//-999 3 9 12 0
//5 1
