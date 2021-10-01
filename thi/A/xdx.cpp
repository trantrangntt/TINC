#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		int dem=0;
		char s[20];
		gets(s);
		for(int i=0; i<strlen(s)/2;i++)
		{
			if(s[i]!=s[strlen(s)-i-1]) dem++;
		}
	if(strlen(s)%2==0)
		{
			if(dem==1) printf("YES\n");
			else printf("NO\n");
		} 
		else
		{
			if(dem<=1) printf("YES\n");
			else printf("NO\n");
		}
	}
}
