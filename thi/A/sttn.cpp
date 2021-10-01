#include<stdio.h>
#include<math.h>
int nto(int x)

{
	if (x<2) return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if (x%i==0) return 0;
		}	return 1;
}

int tp(int n)
{
	int m,kt=1;
	while(n>0)
	{
		m=n%10;
		if(nto(m)==0)
		{
			kt=0;
			break;
		}	
		n/=10;
	}
	if(kt==1) return 1;
	return 0;
}

int tong(int n)
{
	int m,t=0;
	while(n>0)
	{
		m=n%10;
		t+=m;
		n/=10;
	}
	if(nto(t)) return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,dem=0;
		scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++)
		{
			if(tp(i))
			if(tong(i))
			if(nto(i)) dem++;
		}
		printf("%d",dem);
		printf("\n");
	}
}
