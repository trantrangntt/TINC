#include<stdio.h>
int main()
{
	int t,a[18];
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		int m,k=0,e=1,b=1;
		scanf("%lld",&n);
		while(n>0)
		{
			m=n%10;
			if(m!=0&&m!=8&&m!=9) 
			{
				if(m!=1)
				{
					e=0;
					break;
				}
				if(m==1)
				{
					b=0;
				}
			}
			if(e==1||b==0)
			{
			
				if(m==0||m==8||m==9) m=0;
			
				a[k]=m;
				k++;
			
			}
			n/=10;
		}
		if(e==0||b==1) printf("INVALID");
		else
		{
			int x=k-1;
			while(a[x]==0) x--;
			for(int i=x;i>=0;i--)
			{
				
				printf("%lld",a[i]);
			}
		}
		printf("\n");
	}
}
