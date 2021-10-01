#include<stdio.h>
#include<string.h>

int main() {
   
int t;
scanf("%d\n",&t);
while(t--)
{
 	int dem=0;
	char s[200];
	gets(s);
    for(int i=0;i<strlen(s);i++)
   {
       
       if(s[i]==32&&s[i-1]!=32) dem++;
        
	}
	
	if(s[0]==32) dem--;
	if(s[strlen(s)-1]==32) dem--;
	
	printf("%d",dem+1);
	printf("\n");
	
}
		
        
}
