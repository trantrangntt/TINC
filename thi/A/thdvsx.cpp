#include<stdio.h>
int main()
{
	int t,k=1;
	int a[100] ,b[100], c[100];
	scanf("%d",&t);
	while(t--)
	{
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	
	for(int i=0; i<n-1;i++)
	{
 		for(int j=i+1; j<n;j++){
			if(a[i]>a[j])
			{
				int l=a[i];
				a[i]=a[j];
				a[j]=l;	
			}
		}
		
	}
	
	for(int i=0; i<n-1;i++)
	{
 		for(int j=i+1; j<n;j++){
			if(b[i]<b[j])
			{
				int x=b[i];
				b[i]=b[j];
				b[j]=x;	
			}
		}
		
	}

	printf("Test %d:\n",k);
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",a [i]);
		printf("%d ",b [i]);
		
	}
	printf("\n");
	k++;
	}
}
