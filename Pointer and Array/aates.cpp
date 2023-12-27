#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int sum = 0;
	long long int arr[n + 1] = {0};
	long long int cek[n + 1] = {0};
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 1; i <= n; i++){
		cek[arr[i]] = 1;
	}
	for(int i = 1; i <= n; i++){
		if(cek[i] > 0) sum++;
	}
	printf("%d\n", sum);	
}
