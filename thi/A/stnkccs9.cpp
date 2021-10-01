#include<stdio.h>


	
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

int c6(int y)
{
	
		int m,t=1;

		while(y>0)
        {
            m=y%10;
            if(m==9)
            {
            	t=0;
            	break;
			}
            y/=10;

        }
        if(t==1) return 1;
        return 0;	
}


	
int main()
{
	int a,dem=0;
	scanf("%d",&a);

	for(int i=2;i<=a;i++)
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
