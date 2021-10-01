#include<stdio.h>
int main()
{
	int t, k=0;
	scanf("%d",&t);
	while(t--)
	{
		k++;
		int n,a[100],dem=0,b[100],c[100],z=0,max=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=1;
			c[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			if(a[i+1]>a[i]&&i+1<n)
			{
				b[z]++;
				c[z]=i;
			}
			else z++;
		}
		for(int i=0;i<=z;i++)
		{
			if(b[i]>max) max=b[i];
		}
		printf("Test %d:\n%d\n",k, max);
		for(int i=0;i<z;i++)
		{
			if(b[i]==max){
				for(int j=c[i]-max+2;j<=c[i]+1;j++)
				{
					
					printf("%d ", a[j]);
				}
				printf("\n");
			}
		}
	}
}
