#include<stdio.h>
int main(){
	long long t;
	scanf("%lld",&t);
	for (long long i=0; i<t; i++){
		bigint n,m;
		scanf("%lld%lld",&n,&m);
		printf("%lld",n+m);
		printf("\n");
	}
}

