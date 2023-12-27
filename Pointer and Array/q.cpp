#include<stdio.h>

// n m q untuk jumlah teman, jumlah ruangan, daftar teman
// n bari berikutnya m bilangan bulat merupakan daftar pola ke i, 0 tdk mengunjungi 1 mengunjungi
// q itu teman yang mana?

int main(){
	
	int T;
	scanf("%d", &T);
	for(int tc = 1; tc <= T; tc++){
		
		int n, m, q;
		scanf("%d %d %d", &n, &m, &q);
		int arr[n + 1][m + 1];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &arr[i][j]);
			}
		}
		int fren[q + 1];
		for(int i = 0; i < q; i++){
			scanf("%d", &fren[i]);
		}
		
		int room[51] = {0};
		for(int i = 0; i < q; i++){
			int idx = fren[i] - 1;
			for(int j = 0; j < m; j++){
				if(arr[idx][j]) room[j] = (room[j] == 0) ? 1 : 0;
			}
		}
		
		printf("Case #%d:\n", tc);
		for(int i = 0; i < m; i++){
			printf("%s\n", room[i] ? "YES" : "NO");
		}
	}
	
	return 0;
}

//2
//3 3 2
//0 1 0
//1 1 1
//1 0 1
//1 2
//3 3 3
//1 1 0
//0 0 1
//0 0 0
//1 1 2

//3
//3 2 4
//0 1
//1 0
//1 1
//1 1 1 1
//2 3 1
//1 0 1
//0 0 1 
//2
//1 1 1 
//1
//1
