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
	int s=0,p=0,l=0,m,d=0;
	long n;
	scanf("%ld",&n);
	int a[100] ,b[100],tg;
	while(n>0)
	{
		m=n%10;
		a[d]=m;
		d++;
		n/=10;
	}
	for(int i=0;i<d/2;i++){
		tg=a[i];
		a[i]=a[d-i-1];
		a[d-i-1]=tg;
	}
	for(int i=0;i<d;i++)
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
		for(int j=i+1;j<d;j++)
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

	for(int i=0;i<d;i++)
		{	
			if(nto(a[i])&&a[p-1]!=a[i]) 
			{
				a[p]=a[i];	
				p++;
			}
		}
	for(int i=0;i<l;i++)
	 	{
	 		printf("%d %d\n",a[i],b[i]);
		}
	
	

}
