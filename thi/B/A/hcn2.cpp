#include<stdio.h>
int main()
{
	int n,m,k,d;
	scanf("%d %d",&n,&m);
	
	if(n<=m)
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=m;j++)
		{
			printf("%d",j);
		}
	
		for(int j=m-1;j>m-i;j--)
		{
			
			printf("%d",j);
			
		}
		
		printf("\n");
	}
	else
	for(int i=1;i<=m;i++)
	{
	
		for(int j=i;j<=m;j++)
		{
			printf("%d",j);
		}
	
		for(int j=m-1;j>m-i;j--)
		{
			
			printf("%d",j);
			
		}
		
		
		printf("\n");	
		
	}
	
	for(int i=1;i<=n-m;i++)
	{
		for(int j=i+m;j>=i+1;j--)
			printf("%d",j);

		printf("\n");
	}	
	
	
}
