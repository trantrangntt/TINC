#include<stdio.h>
#include<math.h>
int cb(int n)
{
		int m,dc=0,dl=0,d=0;
		while(n>0)
		{
			m=n%10;
			if(m%2==0) dc++;
			else dl++;
			d++;
			n/=10;
		}
		if(d%2==0) 
		{
			if(dc==dl) return 1;
			else return 0;
		}
		else return 0;
}

int main()
{
	int n,dem=0;
	scanf("%d",&n);
	for(int i =pow(10,n-1); i<pow(10,n);i++)
	{
		if(cb(i)) 
		{
			dem++;
			printf("%d ",i);
			if(dem>=10) 
			{
				printf("\n");
				dem=0;
			}
		
		}
		
	}
}
