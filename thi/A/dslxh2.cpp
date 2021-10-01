#include<stdio.h>
int main()

{


int t,dt=1;
scanf("%d",&t);
while(t--)


{
	int n,s=0,p=0;
	scanf("%d",&n);
	int a[100] ,b[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	printf("Test %d:\n",dt);
	dt++;
	
	for(int i=0;i<n;i++)
	{
		int dem=1;
		int m=1;
		
		for(int k=0;k<i;k++)
		{
			if(a[k]==a[i]) 
			{
				m=0;break;
			}
		}
		
		if(m==1)
		{
		
		for(int j=i+1;j<n;j++)
		{
			if(a[j]==a[i]) dem++;
		}
		b[s]=dem;
		s++;
		}
	}
	int l=0;
	for(int i=0;i<n;i++)
		{	
			int k=1;
			for(int j=0;j<i;j++)
			  if(a[i]==a[j])
			{
				k=0;
				break;
			}
			if(k==1)
			{
				l++;
				a[p]=a[i];
				p++;
	    	}
		}
	
	for(int i=0;i<l;i++)
	 	{
	 		printf("%d xuat hien %d lan\n",a[i],b[i]);
		}
	
	printf("\n");
}
}
