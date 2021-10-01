#include<stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	for (int i=1; i<=t; i++){
		scanf("%d",&n);
		int a[n];
		a[0]=1;
		a[1]=1;
		for(int i=2; i<n; i++){
		//	if(i>2) 
			a[i]=a[i-1]+a[i-2];
			
		}
		printf("%d",a[n-1]);
		printf("\n");
	}
}

