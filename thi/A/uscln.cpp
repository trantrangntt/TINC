#include<stdio.h>


	int uoc(int a, int b)
	{
		
    int c;
    while((c = (a%b)) != 0)
	{
        a = b;
        b = c;
	}
	return b;
	}
	
	int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
		{
			int a,b;
			scanf("%d %d",&a,&b);
			printf("%d",uoc(a,b));
			printf("\n");
		}
	}
