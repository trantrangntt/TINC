#include<stdio.h>
#include<string.h>

int main() {
   char s[100];
   int demc=0,dems=0;
   gets(s);
   for(int i=0;i<strlen(s);i++)
   {
        if( (97<=s[i]&&s[i]<=122) || (65<=s[i]&&s[i]<=90) ) demc++;
        if( 48<=s[i]&&s[i]<=57 ) dems++;
        
	}
		
	printf("%d %d %d", demc,dems,strlen(s)-demc-dems);
        
}
