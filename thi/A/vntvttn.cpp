#include <stdio.h>
#include<math.h>


int nto(int x)
{	
	if(x<2) return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}return 1;
}

int tn(int y)
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
    int t,a,b,dem;
    scanf("%d",&t);
    for(int i=1; i<=t;i++)
    {
       dem=0;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++)
        {
        	if(nto(i)==1&&tn(i)==1) {
        		printf("%d ",i);
        		dem++;
			}
        	if(dem>=10) {
        		printf("\n");
        		dem=0;
			}
		} 
		
		printf("\n");
		printf("\n");

    }
}
