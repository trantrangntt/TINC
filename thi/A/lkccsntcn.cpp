#include<stdio.h>
#include<math.h>

int check(long a, long b)
{
	long min,dem=0;
	min=(a<b)?a:b;
	for(long i=2;i<=min;i++)
		{	
			if(a%i==0&&b%i==0) 
			{	 
				dem++;
				break;
			}
		}
		if(dem==0) return 1;
		return 0;  
}

int main()
{
	long a,b;
	scanf("%ld%ld",&a,&b);
	for(long i=a;i<b;i++)
	{
		for(long j=i+1;j<=b;j++)
		{
			if(check(i,j)&&(i<j)) printf("(%ld,%ld)\n",i,j);
	
		}
			
	}
}
