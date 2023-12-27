#include<stdio.h>

int main(){
	int size;
	scanf("%d", &size);
	bool isYay = true;
	int arr[size + 1][size + 1];
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int idx = 0;
	while(idx < size){
		for(int i = 0; i < size - 1; i++){
			for(int j = i + 1; j < size; j++){
				if(arr[i][idx] == arr[j][idx]){
					isYay = false;
					break;
				}
			}
		}
		idx++;
	}
	
	printf("%s\n", (isYay) ? "Yay" : "Nay");
	return 0;
}

//3
//1 2 3
//2 3 1
//3 1 2
