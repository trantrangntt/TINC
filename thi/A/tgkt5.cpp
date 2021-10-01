#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		for(int j=1;j<=t-i+1;j++)
		{
			
			if(j==1) printf("%c",t-i+64);
			else 
			{
				printf("%c",t-i+j+63);
				
			}
		}
		
		printf("\n");
	}
}
