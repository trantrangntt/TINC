#include<stdio.h>

int tn(long long y)
	{	
		int m,t=0,y1;
		y1=y;
		while(y>0)
        {
            m=y%10;
            t=t*10 +m;
            y/=10;

        }
        if(t==y1) return 1;
        return 0;
    }
    
    
    int cs(long long y)
	{	
		int m,k=1;
		
		while(y>0)
        {
        	m=y%10;
        	if(m%2==0)
        	{
        		k=0;
        		break;
			}
			y/=10;
        }
        if(k==1) return 1;
        return 0;
    }
    
    
int to(long long n)
	{
		int tong=0;
			while(n>0)
		{
			int m;
			m=n%10;
			tong+=m;
			n/=10;
    	}
		if(tong%2==0) return 0;
		return 1;
	}


int main()
{

int t;
scanf("%d",&t);
while(t--)
{

	long long a;
	scanf("%lld",&a);
	
	
	if(tn(a)&&cs(a)&&to(a)) printf("YES");
	else printf("NO");
	
	
	printf("\n");
	
}
}
