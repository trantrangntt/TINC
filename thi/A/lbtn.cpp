#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{	
		int k=1;
		for(int j=0;j<i;j++)
		  
			if(a[i]==a[j])
			{
				k=0;
				break;
			}
		if(k==1) printf("%d ",a[i]); 
		
	}
}
