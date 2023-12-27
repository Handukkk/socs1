#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n+1];
	int urutan[n+1];
	for(int i=0;i<n;i++) scanf("%d",&urutan[i]);
	for(int i=0;i<n;i++) scanf("%d",&arr[urutan[i]]);
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
		if(i<n-1) printf(" ");
	} 
	puts("");
	return 0;
}

//5
//0 4 3 1 2	
//1 2 3 4 5
