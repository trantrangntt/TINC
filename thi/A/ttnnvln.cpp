#include<stdio.h>
#include<math.h>

long long tb(long long x)
{
	long long x1=0,m,k=1;
	while(x>0)
	{
		m=x%10;
		if(m==6) m=5;
		x1+=m*k;
		k*=10;
		x/=10;
	}
	return x1;
}
long long tl(long long x)
{
	long long x1=0,m,k=1;
	while(x>0)
	{
		m=x%10;
		if(m==5) m=6;
		x1+=m*k;
		k*=10;
		x/=10;
	}
	return x1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long x,y;
		scanf("%lld %lld",&x,&y);
		printf("%lld %lld\n",tb(x)+tb(y), tl(x)+tl(y));
	}
}
