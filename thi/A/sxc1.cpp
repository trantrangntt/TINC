#include<stdio.h>
int main()
{
	int n,min=100,z,k=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(k<n)
	{
 		for(int j=k; j<n;j++){
			if(a[j]<min)
			{
				min=a[j];
				z=j;	
			}
		}
		
	a[z]=a[k];a[k]=min;min=100;k++;
	if(k<n)
	 {
	
		printf("Buoc %d: ",k);
		for(int i=0;i<n;i++)
		printf("%d ",a[i]);
		printf("\n");
	 }	
	 }

}
