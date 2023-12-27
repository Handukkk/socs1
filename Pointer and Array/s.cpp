#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		int num1, num2;
		scanf("%d %d", &num1, &num2);
		int sum = 0;
		int idx = 1;
		while(num1 || num2){
			int tempSum = num1 % 10 + num2 % 10;
			tempSum %= 10;
			sum += idx * tempSum;
			num1 /= 10;
			num2 /= 10;
			idx *= 10;
		}
		printf("Case #%d: %d\n", t, sum);
	}
}

//4
//999 110
//99 999
//99 11
//99 1

