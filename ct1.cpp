#include<stdio.h>
#include<math.h>
int nto(long long n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0)    return 0;
	}
	return 1;
}
int main(){
	long long t;
	scanf("%lld",&t);
	if (nto(t)) printf("YES");
	else printf("NO");
	
}
