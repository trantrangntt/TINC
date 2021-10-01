#include<stdio.h>


	
int tn(int y)
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

int c6(int n)
{	int k=0;
	while(n>0)
	{
		int m;
		m=n%10;
		if(m==6)
		{
			k=1;
			break;
		}
		n/=10;
    }
	if(k==1) return 1;
	return 0;
}

int t(int n)
{	int tong=0;
		while(n>0)
	{
		int m;
		m=n%10;
		tong+=m;
		n/=10;
    }
	if(tong%10==8) return 1;
	return 0;
}
	
int main()
{
	int a,b,dem=0;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		int c=a;a=b;b=c;
	}
	for(int i=a;i<=b;i++)
	{
		if(tn(i)&&c6(i)&&t(i))
		{
		 printf("%d ",i);
		}
	}
	
}
