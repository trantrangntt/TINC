#include<stdio.h>
#include<math.h>

	
int tn(int y)
	{	
		int m,t=0;
		while(y>0)
        {
            m=y%10;
            t+=m;
            y/=10;

        }
        if(t%5==0) return 1;
        return 0;
    }
    
int c6(int y)
{
	if(y<2) return 0;
	for(int i=2;i<=sqrt(y);i++)
	{
		if(y%i==0) return 0;
	}return 1;
}


	
int main()
{
	int a,dem=0;
	scanf("%d",&a);

	for(int i=1;i<=a;i++)
	{
		if(tn(i)&&c6(i))
		{
		 printf("%d ",i);
		 dem++;
		}
	}
	printf("\n");
	printf("%d",dem);
	
}
