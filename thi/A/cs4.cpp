#include<stdio.h>
#include<math.h>
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
    
int to(int n)
	{
		int tong=0;
			while(n>0)
		{
			int m;
			m=n%10;
			tong+=m;
			n/=10;
    	}
		if(tong%10==0) return 1;
		return 0;
	}

int s4(int n)
	{
		int t=1;
			while(n>0)
		{
			int m;
			m=n%10;
			if(m==4)
			{
				t=0;
				break;
			}
		
			n/=10;
    	}
		if(t==1) return 1;
		return 0;
	}


int main()
{

int t;
scanf("%d",&t);
while(t--)
{
	
	int a;
	scanf("%d",&a);
	
	for(int i=pow(10,a-1);i<pow(10,a);i++)
	{
		if(tn(i)&&to(i)&&s4(i))	printf("%d ",i);
	}
	
	printf("\n");
	
}
}
