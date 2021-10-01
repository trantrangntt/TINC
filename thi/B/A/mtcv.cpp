#include<stdio.h>

void input(int a[][100],int m, int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
}

void output(int a[][100],int m,int n)
{
	for(int i=0;i<n;i++)
	{
	
		for(int j=0;j<m;j++) 
		{
			printf("%d ",a[j][i]);
			
		}
			
		printf("\n");
	}
}

int main()
{
	int a[100][100];
	int m,n;
	scanf("%d %d",&m,&n);
	input(a,m,n);
	output(a,m,n);
}
