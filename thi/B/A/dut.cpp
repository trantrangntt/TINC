#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[100005],a[200];
		int z=0,dem=0,demc=0,deml=0;
		gets(s);
		for(int i=0;i<strlen(s);i++)
		{
			
			if(s[i+1]==32||s[i+1]==0)
			if(s[i-1]!=32)
			{
				a[z]=s[i]-'0';
				z++;
			}
		}
		for(int i=0;i<z;i++)
		{
			
			dem++;
			if(a[i]%2==0) demc++;
			else deml++;
		}
		if(dem%2==0)
		{
			if(demc>deml) printf("YES");
			else printf("NO");
		}
		else
		{
			if(deml>demc) printf("YES");
			else printf("NO");
		}
		
	
		printf("\n");
	

	}
	

	
}
