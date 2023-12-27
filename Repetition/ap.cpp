#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int a;
		long long k;
		scanf("%d %lld", &a, &k);
		char input[a];
		scanf("%s", input);
		for(int j =0;j < a; j++){
			input[j] -= 'a';
			input[j] = (input[j] + k) % 26;
			input[j] += 'a';
		}
		printf("Case #%d: %s\n", i, input);
	}
	return 0;
}
