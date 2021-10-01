#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		for(int j=i*2-1;j<=t*2-1;j+=2)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
}
