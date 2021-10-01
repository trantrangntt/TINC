#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<=b)
	for(int i=1;i<=a;i++)
	{
		for(int j=a-i+1;j<=b;j++)
		{
			printf("%c",j+64);
		}
		for(int j=b-a+i;j<b;j++)
		{
			printf("%c",b+64);
		}
		
		printf("\n");
	}
	else
	{
	
		
		for(int i=1;i<=a-b;i++)
		{
			for(int j=1;j<=b;j++)
			{
				printf("%c",b+64);
				
			}
			printf("\n");
		}
			for(int i=1;i<=b;i++)
		{
			for(int j=b-i+1;j<=b;j++)
			{
				printf("%c",j+64);
				
			}
			
			
		
			for(int j=a-b+i;j<a;j++)
		{
			printf("%c",b+64);
		}
			
			
			
			printf("\n");
		}
	}
}
