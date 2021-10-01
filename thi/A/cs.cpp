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
			int a,b,c,d;
			scanf("%d %d %d %d",&a,&b,&c,&d);
			if(uoc(a,b)==uoc(c,d)) printf("YES");
			else printf("NO");
			printf("\n");
		}
	}
