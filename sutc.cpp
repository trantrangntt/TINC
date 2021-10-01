#include<stdio.h>
long long sc(long long n){
	int h=n%10;
	if (h%2==0) return 1;
	return 0;
}
long long ut(long long n){
	int chan=0,le=0;
	while(n>0){
		int m=n%10;
		if(m%2==0) chan++;
		else le++;
		n/=10;
	}
	if (chan > le  ) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		long long n;
		scanf("%lld",&n);
		if (sc(n) && ut(n)) printf ("YES");
		else printf("NO");
		printf("\n");
	}
	
}

