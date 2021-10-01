#include<stdio.h>

int main()
{
	int n,k,m;
	scanf("%d %d",&n,&k);
	
	for(int i=1;i<=n;i++)
	{
		m=i;
		while(m%2==0)
			{
				m/=2;
				k--;
			}
		
	}
	if(k<=0) printf("Yes");
	else printf("No");
}
