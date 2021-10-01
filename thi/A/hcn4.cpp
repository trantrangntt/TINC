#include<stdio.h>
int main()
{
	int n,m,k,d;
	scanf("%d %d",&n,&m);
	
	if(n<=m)
	for(int i=1;i<=n;i++)
	{
		for(int j=m+1-i;j>=1;j--)
		{
			
			printf("%d",j);
			
		}
		
		for(int j=2;j<=i;j++)
		{
			
			printf("%d",j);
			
		}
		
		printf("\n");
	}
	else
	{
		for(int i=1;i<=n-m;i++)
		{
			for(int j=n+1-i;j>n-m+1-i;j--)
			{
				printf("%d",j);
			}
			printf("\n");
		}
		
		
		
		
		for(int i=1;i<=m;i++)
		{
			for(int j=m+1-i;j>=1;j--)
			{
			
				printf("%d",j);
			
			}
		
			for(int j=2;j<=i;j++)
			{
			
				printf("%d",j);
			
			}
		
			printf("\n");
		}
	}
}
