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
	for(int i=1;i<m;i++)
	{
	
		for(int j=1;j<n;j++) 
		{
			printf("%d ",a[i][j]);
			
		}
			
		printf("\n");
	}
}

int main()
{
	int t,k=0;
	scanf("%d",&t);
	while(t--)
	{
		
		k++;
		int a[100][100];
		int m,n;
		scanf("%d %d",&m,&n);

		input(a,m,n);
		printf("Test %d:\n",k);

		output(a,m,n);
		
	
		printf("\n");
	
	}
}
