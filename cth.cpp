#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a,b, dem=0;
		scanf("%d", &a);
		for(int i=pow(10,a-1);i<pow(10,a);i++)
		{
			int b, c, dem=0,n=i;
			b=n%10;
			while(n!=0)
			{
				n/=10;
				c=n%10;
				if(b>=c) dem++;
				else break;
				b=n%10;
			}
			if(dem==a) printf("%d ", i);
			if(dem!=a)
			{
				i+=pow(10,dem-1);
			}
		}	
	printf("\n");
	}
}
