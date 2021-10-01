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
			printf("%c",j+64);
		}
	
		for(int j=i-1;j>=1;j--)
		{
			
			printf("%c",j+64);
			
		}
		
		printf("\n");
	}
	else
	
	for(int i=1;i<=m;i++)
	{
		for(int j=i;j<=m;j++)
		{
			printf("%c",j+64);
		}
	
		for(int j=i-1;j>=1;j--)
		{
			
			printf("%c",j+64);
			
		}
		
		
		printf("\n");	
		
	}
	
	for(int i=1;i<=n-m;i++)
	{
		for(int j=i;j<i+1;j++)
			printf("%c",m+64);
		for(int j=m-1;j>=1;j--)
			printf("%c",j+64);
			
		printf("\n");
	}	

	
}
