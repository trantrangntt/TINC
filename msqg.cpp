#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t,k;
	scanf("%d",&t);
	while(t--){	
		int a[20];
		k=0;;
		long long n;
		scanf("%lld",&n);
		while(n>0){
			int m=n%10;
			a[k]=m;
			k++;
			n/=10;
		}
		int c;
		for (int i=k-1; i>=0; i--){
		//	printf("%d ",a[i]);
			if ( a[i]==0 && a[i-1]==8 && a[i-2]==4){
					 c=i;
			}
		}
		for (int i=k-1; i>=0; i--){
			if (i==c){
				i=i-2;
			}
			else 	printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}

