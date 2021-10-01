#include<stdio.h>
#include<math.h>



int main()

{
	int n,a;
	long long t=0;
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%d",&a);
	
		while(a%2==0)
		{
			t+=2;
			a/=2;
		}
	
		for(int j=3; j<= sqrt(a); j+=2)
        	{
          		while(a%j==0)
          		{
          			t+=j;
    				a/=j;
				}
			}
		while(a>1) 
			{
				t+=a;
				a/=a;
			}
		
	}
	
	printf("%lld",t);

}
