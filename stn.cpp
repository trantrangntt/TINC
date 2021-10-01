#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++){
		long long temp=0,m,n;
		scanf("%lld",&n);
		m=n;
		while (m>0){
			temp=temp*10 +m%10;
			m/=10;
		}
		if (temp==n) printf("YES");
		else printf ("NO");
		printf("\n");
	}
}

