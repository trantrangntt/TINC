#include<stdio.h>
int main()
{
	int n,a[50][50];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		int c=a[i][i];
		a[i][i]=a[i][n+1-i];
		a[i][n+1-i]=c;
				
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
