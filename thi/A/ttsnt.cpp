#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	
	long a, c=1,tich=1,i;
	scanf("%ld",&a);
	for( i=2;a>1;)
	{
		if(a%i==0)
		{
			a/=i;
			
			if(c!=i)
			{
				tich*=i;
			}	
			c=i;
		}
		else i++;
	}
	printf("%ld",tich);
	printf("\n");
	}
}
