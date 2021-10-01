#include <stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{	

		int m=1,t=0;
	    char s[1000]; 
   		gets(s);
   		
   		for(int i=0;i<strlen(s);i++)
   		{
   			t++;
   			if(s[i]<48||s[i]>57||s[0]-48==0) 
   			{
   				m=0;
   				break;
			}
	 	}
		
		if(m==0) printf("INVALID");
		else
		{
			int l=0,c=0;
			for(int i=0;i<strlen(s);i++)
			{
				if((s[i]-48)%2==0) c++;
				else l++;
			}
			if(t%2==0)
			{
				if(c>l)	printf("YES");
				else printf("NO");
			} 
		
			if(t%2!=0)
			{
				if(l>c) printf("YES");
				else printf("NO");
			}

		
		}
		
		printf("\n");
	}
	
}
