#include<stdio.h>
#include<math.h>

int nto(int x){
	if (x<2) return 0;
	for (int i=2;i<=sqrt(x);i++)
		if (x%i==0) return 0;
	return 1;
}


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long m,n,a,b,dem=0;
		
		scanf("%lld %lld",&m,&n);
    	a=sqrt(m);
	   	b=sqrt(n);
	   
    	if(a*a!=m||a==1) a++;
    
    	for(int i=a;i<=b;i++)
        {
        	if(nto(i)) dem++;
		}
		printf("%d",dem);
		printf("\n");
		
	}
}
