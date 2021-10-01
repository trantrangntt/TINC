#include<stdio.h>
#include<math.h>
int nt(int x)
{
	if(x<2) return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}return 1;
}
int main()
{
	int n,a[30][30],dem[30],b[30][30],max=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
		dem[i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(nt(a[i][j])) 
			{
				b[i][j]=a[i][j];
				dem[i]++;
			
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(dem[i]>max) max=dem[i];
	}
	int max2=max;
	for(int i=1;i<=n;i++)
	{
		if(dem[i]==max) 
		{
			printf("%d\n",i);
			break;
		}
	}
		for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(dem[i]==max) 
			{
				if(nt(a[i][j])) 
				{
					printf("%d ",b[i][j]);
					max2--;
				}		
			}
			if(max2==0) break;
		}
		if(max2==0) break;
	}

}
