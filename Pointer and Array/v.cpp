#include<stdio.h>

int main(){
	
	int n;
	scanf("%d", &n);
	
	for(int t = 1; t <= n; t++){
		int in;
		scanf("%d", &in);
		long long int arr[100];
		arr[0] = 0; arr[1] = 1;
		for(int i = 2; i <= in; i++){
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		printf("Case #%d: %lld\n", t, arr[in - 1]);
	}
	
	return 0;
}
