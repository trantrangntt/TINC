#include<stdio.h>
#include<math.h>



int main()
{
	long a,b;
	scanf("%ld %ld",&a,&b);
	long min,dem=0;
		min=(a<b)?a:b;
		for(long i=2;i<=min;i++)
		{	
			if(a%i==0&&b%i==0) 
			{	 
				printf("%ld\n%ld",i,a*b/i);
				dem++;
				break;
			}
		}
		if(dem==0) printf("1\n%ld",a*b);
    
}
