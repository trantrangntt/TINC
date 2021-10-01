#include<stdio.h>
#include<math.h>
int nto(long x){
	if (x<2) return 0;
	for (int i=2;i<=sqrt(x);i++)
		if (x%i==0) return 0;
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long n,max=0;
		scanf("%ld",&n);
		for(int j=1;j<=sqrt(n);j++)
			if (n%j==0){
				if (nto(j) && j>max) max=j;
				if (nto(n/j) && n/j>max) max=n/j;
			}
		printf("%ld\n",max);
	}
}
