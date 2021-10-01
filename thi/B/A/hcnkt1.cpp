#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<=b)
	for(int i=1;i<=a;i++)
	{
		for(int j=b;j>b-i;j--)
		{
			printf("%c",j+96);
		}
		for(int j=1;j<=b-i;j++)
		{
			printf("%c",b-i+1+96);
		}
		printf("\n");
	}
	else
	{
		for(int i=1;i<=b;i++)
		{
				for(int j=a;j>a-i;j--)
			{
				printf("%c",j+96);
			}
			for(int j=1;j<=b-i;j++)
			{
				printf("%c",a-i+1+96);
			}
			printf("\n");
		}
	
	
	
		for(int i=1;i<=a-b;i++)
		{
			for(int j=a;j>a-b;j--)
			{
				printf("%c",j+96);
			}
			printf("\n");
		}
	}
}
