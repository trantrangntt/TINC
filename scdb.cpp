#include<stdio.h>
long long sc(long long n){
	int m;
	while (n>0){
		m=n%10;
		if (m%2!=0 ) return 0;
		
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++){
		long long n;
		scanf("%lld",&n);
		if (sc(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}

