#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	m=n*2-1;
	
	for(int i=1;i<=n;i++)
	{
	
		for(int j=n;j>=n+2-i;j--)
		{
			printf("%d",j);
		}
		for(int j=i;j<=m-i+1;j++)
		{
			printf("%d",n+1-i);
		}
		for(int j=n+2-i;j<=n;j++)
		{
			printf("%d",j);
		}
	
		
		printf("\n");
	}
	for(int i=1;i<=m-n;i++)
	{
		for(int j=n;j>i;j--)
		{
			printf("%d",j);
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("%d",i+1);
		}
		for(int j=i+1;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
