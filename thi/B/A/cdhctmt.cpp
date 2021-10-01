#include<stdio.h>
int main()
{
	int m,n,a[50][50];
	scanf("%d %d",&m,&n);
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int p,q;
	scanf("%d %d",&q,&p);
	for(int i=1;i<=m;i++)
	{
		int c=a[i][p];
		a[i][p]=a[i][q];
		a[i][q]=c;
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
