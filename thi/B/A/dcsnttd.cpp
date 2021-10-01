#include<stdio.h>
#include<math.h>
int nto(int x){
	if (x<2) return 0;
	for (int i=2;i<=sqrt(x);i++)
		if (x%i==0) return 0;
	return 1;
}
int main()

{


int t,dt=1;
scanf("%d",&t);
while(t--)


{
	int n,s=0,p=0,l=0;
	scanf("%d",&n);
	int a[100] ,b[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				int d=a[j]; a[j]=a[i]; a[i]=d;
			}
		}
	}
	
	printf("Test %d:\n",dt);
	dt++;
	
	for(int i=0;i<n;i++)
	{
		int dem=1;
		int m=1;
		
		if(nto(a[i]))
		{
		
		for(int k=0;k<i;k++)
		{
			if(nto(a[k]))
			if(a[k]==a[i]) 
			{
				m=0;break;
			}
		}
		
		if(m==1)
		{
		
		for(int j=i+1;j<n;j++)
		{
			if(nto(a[j]))
			if(a[j]==a[i]) 
			{
				dem++;
			
			}
		}
		b[s]=dem;
		l++;
		s++;
		}
		
		}
	}

	for(int i=0;i<n;i++)
		{	
			if(nto(a[i])&&a[p-1]!=a[i]) 
			{
		
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
