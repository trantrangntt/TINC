#include<stdio.h>
#include<string.h>

int main() {
   
int t;
scanf("%d\n",&t);
while(t--)
{
 	int m;
	char s[1000];
	gets(s);
    for(int i=0;i<strlen(s);i++)
    {	
	   m=1;
       if(s[0]-48==0||s[i]<48||s[i]>57)
       {
       	 m=0;
       	 break;
	   }
	}
	if(m==0) printf("INVALID");

	
	else{
	
	for(int i=0;i<strlen(s);i++)
	   {
	   	for(int j=i+1;j<strlen(s);j++)
		{
			if(s[i]>s[j])
			{
				int c=s[i];
				s[i]=s[j];
				s[j]=c;	
			}
		}
		}
		
	int k=0,dem=0;
	for(int i=0;i<strlen(s);i++)
	{
		if((s[i]-48)==k)
		{
			dem++;
			k++;
		}
	}
		if(dem==10) printf("YES");
		else printf("NO");
	}
	printf("\n");
} 
}
