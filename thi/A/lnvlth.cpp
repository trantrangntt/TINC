#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0; i<n-1;i++)
	{
 		for(int j=i+1; j<n;j++){
			if(a[i]<a[j])
			{
				int c=a[i];
				a[i]=a[j];
				a[j]=c;	
			}
		}
	}
	int max1=a[0];
	printf("%d ",max1);
	for(int i=1;i<n;i++)
	{
		if(a[i]<max1){
		 printf("%d",a[i]);
		break;
	}
	}
}
