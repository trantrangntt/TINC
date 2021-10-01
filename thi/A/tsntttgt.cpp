#include<stdio.h>
#include<math.h>
#include<string.h>
int nt(int x)
{
	if(x<2) return 0;
	else
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
		
	}return 1;
}
int main()
{
	int n, a[50][50],dem=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(nt(a[i][j])) dem+=a[i][j];
		}
	}
	printf("%d",dem);
}
