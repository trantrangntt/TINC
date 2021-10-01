#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<=b)
	for(int i=1;i<=a;i++)
	{
		for(int j=i;j<=b;j++)
		{
			printf("%c",j+63);
		}
		for(int j=1;j<i;j++)
		{
			printf("%c",b+63);
		}
		
		printf("\n");
	}
	else
	{
		for(int i=1;i<=b;i++)
		{
			for(int j=i;j<=b;j++)
			{
				printf("%c",j+63);
				
			}
			for(int j=1;j<i;j++)
			{
				printf("%c",b+63);
			}
			printf("\n");
		}
		for(int i=1;i<=a-b;i++)
		{
			for(int j=1;j<=b;j++)
			{
				printf("%c",b+63);
				
			}
			printf("\n");
		}
	}
}
