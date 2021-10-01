#include<stdio.h>
#include<math.h>
int nto(int x)

{
	if (x<2) return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if (x%i==0) return 0;
		}	return 1;
}

int main()
{
	int n,i=2, dem=0;
	scanf("%d",&n);
	while(n>0)
	{
		if(nto(i)) {
			printf("%d\n",i);
			dem++;
		}
		i++;
		
		if(dem==n) break;
	}
}
