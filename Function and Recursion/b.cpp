#include<stdio.h>

void sumTree(int arr[], int index, int sum, int maxIdx){
	sum += arr[index];
	
	if(index * 2 > maxIdx){
		printf("%d\n",sum);
		return;
	}else{
		sumTree(arr, index * 2, sum, maxIdx);
	}
	
	if(index * 2 + 1 > maxIdx){
		if(maxIdx % 2 == 0) return;
		printf("%d\n",sum);
		return;
	}else{
		sumTree(arr, index * 2 + 1, sum, maxIdx);
	}
}

int main(){
	
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		int input[105];
		int len;
		scanf("%d",&len);
		for(int i = 1; i <= len; i++){
			scanf("%d", &input[i]);
		}
		printf("Case #%d:\n", t);
		sumTree(input, 1, 0, len);
	}	
	return 0;
}
