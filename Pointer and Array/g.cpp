#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);	
	for(int t=1;t<=n;t++){
		long long int howMuch,a[1000000],b[1000000];
		scanf("%lld",&howMuch);
		long long int sum = howMuch;
		for(int i=0;i<howMuch;i++) scanf("%lld",&a[i]);
		for(int i=0;i<howMuch;i++) scanf("%lld",&b[i]);
		for(int i=0;i<howMuch;i++) if(!(b[i]>a[i])) sum--;
		printf("Case #%d: %lld\n",t,sum);
	}
	
	return 0;
}
