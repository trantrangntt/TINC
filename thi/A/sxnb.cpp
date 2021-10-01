#include<stdio.h>
int main()
{
	int n,n1,dem=0,b=1;
	scanf("%d",&n);
	n1=n;
	int a[n];
	for(int i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	while(n1--)
	{
		dem=0;
		for(int i=0; i<n-1;i++)
		{
 			if(a[i]>a[i+1])
			{
				int c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
				dem++;
			}
		}
		
		
		if(dem>0)
		{
			printf("Buoc %d: ",b);
			b++;
			for(int i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
		}
		printf("\n");
		
	}
}
