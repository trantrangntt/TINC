#include<stdio.h>
#include<string.h>
int main(){

		char s1[100];
		gets(s1);
		
		
			 for(int i=0;i<strlen(s1);i++)
			{
				
					if(65<=s1[i]&&s1[i]<=90) 
					{
						s1[i]=s1[i]+32;
        			}
			}
				
   			
		


		char a[100][100];
		int i=0;
	
	
		char *p;
		const char *d=" ";
		for(p=strtok(s1,d);p!=NULL;p=strtok(NULL,d)){
			strcpy(a[i],p);
			i++;
		}

		for(int l=0;l<i-1;l++)
		{
			printf("%c",a[l][0]);
		}
	
		
		printf("%s@ptit.edu.vn ",a[i-1]);
}
