#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int tc = 1; tc <= n; tc++){
		long long int rep;
		scanf("%lld", &rep);
		long long int arr[rep + 1];
		for(int i = 0; i < rep; i++){
			scanf("%lld", &arr[i]);
		}
		
		long long int max = 0;
		long long int secmax = 1;
		
		if(arr[max] < arr[secmax]){
			long long int temp = max;
			max = secmax;
			secmax = temp;
		}
		
		for(int i = 2; i < rep; i++){
			if(arr[i] > arr[max]){
				secmax = max;
				max = i;
			}else if(arr[i] > arr[secmax]){
				secmax = i;
			}
		}
		printf("Case #%d: %lld\n", tc, arr[max] + arr[secmax]);
	}
	return 0;
}

//3
//5
//1 2 3 4 5 
//4
//4 4 4 4 
//3
//10 1 2
