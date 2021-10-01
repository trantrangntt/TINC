#include<stdio.h>
#include<math.h>
int tn(long long y)
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




int main()
{
	int t;
	scanf("%d ",&t);
	while(t--)
	{
	
	long long n,n1=0,d=0,dem=0,e=0,c=0,hihi=0;
	scanf("%lld",&n);
	n1=n;
	
	do
	{
		d=n%10;
		n/=10;
		dem++;
	}while(n>0);
	
	hihi=pow(10,dem-1);
	
	c=n1%10;
	
	e=(n1-d*hihi-c)/10;

	if((d==c*2||c==d*2)&&tn(e)) printf("YES");
	else printf("NO");
	printf("\n");
	}
}
