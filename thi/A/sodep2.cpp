#include<stdio.h>
#include<math.h>
int chan(int n)
{
	int m = n/2,dem = 0;
	for(int i = pow(10,m-1); i < pow(10,m)-1; i++)
	{
		if(i%5== 0)
		dem++;
	}
	return dem;
}
int le(int n)
{
	int m = (n-1)/2;
	return pow(10,m)-pow(10,m-1);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{	
		int n;
		scanf("%d",&n);
		if(n % 2 == 1)
		printf("%d\n",le(n));
		else
		printf("%d\n",chan(n));
	}
}
