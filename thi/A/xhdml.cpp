#include<stdio.h>
int main()
{
	int n,m,dem=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		m=1;
		for(int k=0;k<i;k++)
		{
			if(a[k]==a[i])
			{
				m=0;
				break;
			}
		}
			for(int j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				m=0;
				break;
			}
		}
	    if(m==1) dem++;		
	}
	printf("%d\n",dem);
	for(int i=0;i<n;i++)
	{
		m=1;
		for(int k=0;k<i;k++)
		{
			if(a[k]==a[i])
			{
				m=0;
				break;
			}
		}
			for(int j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				m=0;
				break;
			}
		}
	    if(m==1) printf("%d ",a[i]);		
	}
}
