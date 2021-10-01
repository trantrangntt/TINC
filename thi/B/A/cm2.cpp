#include<stdio.h>
int main(){
	
	int t;int dt=1;
	scanf("%d",&t);
	while(t--)
	{
	
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	
	int a[n*2],b[m*2];
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for (int i=0;i<m;i++)
		scanf("%d",&b[i]);
	
	
	

	printf("Test %d:",dt);
	printf("\n");
	for (int i=0;i<k;i++)
		printf("%d ",a[i]);
	
	
	for(int i=0;i<m;i++)
		printf("%d ",b[i]);
	
	
	for (int i=k;i<n;i++)
		printf("%d ",a[i]);
	
	dt++;
	printf("\n");
}
}
