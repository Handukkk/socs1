#include <stdio.h>

int main(){
	int n;
	long long in, sum;
	scanf("%d", &n);
	sum = 0;
	for(int i = 0; i < n; i++){
		scanf("%lld", &in);
		if(in > 0){
			sum += in;
		}
	}
	printf("%lld\n", sum);
	return 0;
}
