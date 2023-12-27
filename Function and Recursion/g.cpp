#include<stdio.h>
#include<string.h>

int pali(char arr[], int awal, int ahkir){
	if(awal >= ahkir) return 1;
	if(arr[awal] != arr[ahkir]) return 0;
	return pali(arr, awal + 1, ahkir - 1);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		char input[10000];
		scanf("%s", input);
		int hasil = pali(input, 0, strlen(input) - 1);
		if(hasil) printf("Case #%d: yes\n", t);
		else printf("Case #%d: no\n", t);
	}
	return 0;
}
