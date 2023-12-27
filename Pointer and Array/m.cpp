#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	for(int tc=1;tc<=n;tc++){
		int size;
		scanf("%d",&size);
		int arr[size+1][size+1];
		for(int i=0;i<size;i++){
			for(int j=0;j<size;j++){
				scanf("%d",&arr[i][j]);
			}
		}
		int idx=0;
		int sum[size+1]={0};
		while(idx<size){
			for(int i=0;i<size;i++){
				for(int j=0;j<size;j++){
					if(j==idx) sum[idx]+=arr[i][j];
				}
			}
			idx++;
		}
		printf("Case #%d:",tc);
		for(int i=0;i<size;i++)	printf(" %d",sum[i]);
		puts("");
	}
	return 0;
}

//3
//2
//1 2
//3 4
//3
//3 3 3
//2 2 2
//1 1 1 
//4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16

//3
//1
//10
//3
//-3 -2 -1
//-1 -2 -3
//-2 -1 -3
//1
//0
