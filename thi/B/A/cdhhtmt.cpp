#include<stdio.h>
int main()
{
	int m,n,a[50][50],q,p;
	scanf("%d %d",&m,&n);
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&p,&q);

	for(int j=1;j<=n;j++)
	{
		int c=a[p][j];
		a[p][j]=a[q][j];
		a[q][j]=c;
	}
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
