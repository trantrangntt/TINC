#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int a[t];
	for (int i=1; i<=t; i++){
		scanf("%d",&a[i]);
	}
	//printf("\n");
	int k; 
	scanf("%d",&k);
	for (int i=k+1; i<=t; i++){
		printf("%d ",a[i]);
	}
	for (int i=1; i<=k; i++){
		printf ("%d ",a[i]);
	}
}

