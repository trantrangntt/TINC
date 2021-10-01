#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int a[1000];
	a[0]=0;
	a[1]=1;
	int k=1;
	for (int i=0; i<t; i++){
		if (i>=2) 
	    a[i]=a[i-1]+a[i-2];
		printf("%d ", a[i]);
		
	}
	
}
