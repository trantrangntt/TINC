#include<stdio.h>
#include<math.h>
#include<string.h>
int hc(int n){
	if (n==0)  return 0;
	if (n==1)	return 1;
	if (n==8)	return 0;
	if (n==9)	return 0;
	return 2;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,u=0;
		int ktra=1;
		scanf("%lld",&n);
		int k=0;
		while(n>0){
			int m=n%10;
			if(hc(m)==2){
				ktra=0;
				break;
			}
			u=u+hc(m)*pow(10,k);
			k++;
			n/=10;
		}
		if(ktra==0 || u==0) printf("INVALID");
		else	printf("%lld",u);
		printf("\n");
	}
	return 0;
}

