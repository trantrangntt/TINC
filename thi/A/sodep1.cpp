#include<stdio.h>
#include<math.h>
int nto(int x)
{	
	if(x<2) return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}return 1;
}



int tong(int n)
{
	int m;
	int tong=0;
	while(n>0){
	
		m=n%10;
		tong+=m;
		n/=10;
	}return tong;
}

int fb(int n)
{
		int m=0,i=2;
        int a[n];
        a[0]=1;
        a[1]=1;
        while(m<n)
        {	
			a[i]=a[i-1]+a[i-2];
		   	m=a[i];
           	i++;
		}
        
		if(m==n) return 1;
        return 0;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	
	{ 
	 int c;
	  c=a;a=b;b=c;
	}
	
	
	for(int i=a;i<=b;i++)
	{
		if(nto(i)&&fb(tong(i))) printf("%d ",i);
	}
    
}
