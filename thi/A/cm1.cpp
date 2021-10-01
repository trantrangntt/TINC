#include<stdio.h>
int main(){
	int n,m,k;
	scanf("%d %d",&n,&m);
	int a[n*2],b[m*2];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	for (int i=0;i<m;i++)
		scanf("%d",&b[i]);
	scanf("%d",&k);
	
	for (int i=0;i<k;i++)
		printf("%d ",a[i]);
		
	
	for(int i=0;i<m;i++)
		printf("%d ",b[i]);
	
	
	for (int i=k;i<n;i++)
		printf("%d ",a[i]);
}
