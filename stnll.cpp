#include<stdio.h>
#include<math.h>
#include<string.h>
long long le(long long n){
	int m;
	int tong=0;
	while(n>0){
		m=n%10;
		if (m%2==0) return 0;
		tong+=m;
	}
	if (tong%2==0) return 0;
	return 1;
}
long long tn(long long n){
	long long temp=0;
	int m;
	long long h=n;
	while (n>0){
		m=n%10;
		temp= temp*10 +m;
	}
	if (temp==h) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%lld",&t);
	while(t--){
		long long n;
		scanf("%d",&n);
		if (le(n)==1 && tn(n)==1) printf("YES");
		else printf ("NO");
	}
	return 0;
}

