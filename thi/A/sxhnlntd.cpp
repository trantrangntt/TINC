#include<stdio.h>
int main()
{
	int t,a[100],b[100];
	scanf("%d", &t);
	while(t--)
	{
		int n,k=0, max=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=1;
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					b[k]++;
				}				
			}			
				k++;
		}
		for(int i=0;i<n;i++)
		{
			if(b[i]>max) max=b[i];
		}
		for(int i=0;i<n;i++)
		{
			if(b[i]==max) printf("%d ",a[i]);
		}
		printf("\n");
	}
}
