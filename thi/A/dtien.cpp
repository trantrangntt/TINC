#include<stdio.h>
int main()
{
	int t;
	int a[10]={1000,500,200,100,50,20,10,5,2,1};
	scanf("%d",&t);
	while(t--)
	{
		int n,dem=0;
		scanf("%d",&n);
		for(int i=0;i<10;i++)
		{
			while(n-a[i]>=0) 
			{
				dem++;
				n-=a[i];
			}
		}
		printf("%d",dem);
		printf("\n");
		
	}
}
