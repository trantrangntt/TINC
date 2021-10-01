#include<stdio.h>
int main()
{
	int t,dem,k;
	scanf("%d",&t);
	int t1=1;
	while(t1<=t)
	{
		int n,i,j;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Test %d:\n",t1);
		for(i=0;i<n;i++)
		{
			dem=0; 
			k=1;
			for( j=0;j<i;j++)
			{
				if(a[i]==a[j])
				{
					k=0;
				}
			}
			if (k==1) 
			{
				for( j=0;j<n;j++)
				{
					if(a[i]==a[j]) dem++;
				}
			}
			if(dem==0) break;
			printf("\n%d xuat hien %d lan\n",a[i],dem);
		}
		printf("\n");
		t1++;
	}
}
