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

int cs(int n)
{
	int m, k=1;
	while(n>0)
	{
		m=n%10;
		if(nto(m)==0)
		{
			k=0;
			break;
		}
		n/=10;
	}
	if(k==1) return 1;
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
			if(nto(i)&&cs(i)) dem++;
		}
	printf("%d\n",dem);
	}
}
