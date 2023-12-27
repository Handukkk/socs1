#include <stdio.h>
#include <string.h>

int main(){
	
	int kanggoMbaleniHEHE;
	scanf("%d", &kanggoMbaleniHEHE);
	
	for(int mubeng = 0; mubeng < kanggoMbaleniHEHE; mubeng++){
		
		char nompoMlebu[500];
		scanf("%s", nompoMlebu);
		
		int ngecekPener = 1;
		int cek = 0;
		int ndobel = 0;
		for(int mbaleni = 0; mbaleni < strlen(nompoMlebu); mbaleni++){
			if(nompoMlebu[0] == '.' || nompoMlebu[strlen(nompoMlebu) - 1] == '.'){
				ngecekPener = 0;
				break;
			}
			
			if(nompoMlebu[mbaleni] == '.'){
				cek++;
				ndobel++;
				if(ndobel > 1){
					break;
				}
			}else{
				ndobel = 0;
			}
		}
//		pri	ntf("%d %d %d\n", cek, ngecekPener, ndobel);
		
		if(ngecekPener == 1 && cek == 5 && ndobel == 0 && strlen(nompoMlebu) <= 100){
			printf("Case #%d: YES\n", mubeng + 1);
		}else{
			printf("Case #%d: NO\n", mubeng + 1);
		}
		
	}
	
	return 0;
}
