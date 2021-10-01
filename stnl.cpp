#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		long long n, temp=0;
		scanf("%lld",&n);
		long long h=n;
		int m;
		int tong=0;
		while(n>0){
			m=n%10;
			if (m%2==0) break;
			temp=m+ temp*10;
			tong+=m;
			n/=10;
		}
		if(temp=h && tong%2!=0) printf ("YES");
		else printf("NO");
		printf ("\n");
	}
	return 0;
}

