#include<stdio.h>
int a[10000000];
int main(){
		long long n,c,min;
		scanf("%lld",&n);
		
		int ktra=0;
		for (long long i=0; i<n; i++){
			scanf("%lld",&a[i]);
		}
		for (long long i=0; i<n-1; i++){
			for (long long j=i+1; j<n; j++){
				if (a[i]>a[j]){
					c=a[i];
					a[i]=a[j];
					a[j]=c;
				}
			}
		
		}
		min=a[0];		
		for (long long i=0; i<n; i++){
			if (a[i]>min) {
			printf("%lld %lld",a[0],a[i]); 
			ktra=1;
			break;
		}
		
		}
		if (ktra==0) printf("ITPTIT");
		printf("\n");
	
}

