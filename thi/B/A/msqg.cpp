#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		int i1;
		char s[1000];
  		gets(s);
   		for(int i=0;i<strlen(s);i++)
   		{
        	if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4') i1=i;

		}
		for(int i=0;i<strlen(s);i++)
		{
			if(i!=i1&&i!=i1+1&&i!=i1+2) printf("%c",s[i]);
		}
		printf("\n");
	}
}
