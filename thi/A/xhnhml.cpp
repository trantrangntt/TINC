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
	
	for(int i=0;i<n-1;i++)
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
		if(m==1)
		{
		
		for(int j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				printf("%d ",a[i]);
				dem++;
				break;
			}
		}
	    }		
	}if(dem==0) printf("0");
}
