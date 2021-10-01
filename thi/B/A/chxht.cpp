#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s1[100];
		gets(s1);
		
		
			 for(int i=0;i<strlen(s1);i++)
			{
				if(s1[i-1]==' '&&s1[i+1]!=' ')
				{
					if(97<=s1[i]&&s1[i]<=122) 
					{
						s1[i]=s1[i]-32;
        			}
				}
				else
				{
					if(97<=s1[0]&&s1[0]<=122) 
					{
						s1[0]=s1[0]-32;
        			}
        			else
					if(65<=s1[i]&&s1[i]<=90) 
					{
						s1[i]=s1[i]+32;
        			}
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

		
		
		for(int l=0;l<i;l++){
			printf("%s ",a[l]);
		}
		
		printf("\n");
	

	}
	

	
}
