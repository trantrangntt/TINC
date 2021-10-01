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

		 for(int i=0;i<strlen(a[0]);i++)
			{
				if(97<=a[0][i]&&a[0][i]<=122) 
					{
						a[0][i]=a[0][i]-32;
        			}
			}
		
		for(int l=1;l<i;l++){
			if(l<i-1)
			printf("%s ",a[l]);
			else printf("%s",a[l]);
		}
		printf(", %s",a[0]);
		
		printf("\n");
	

	}
	

	
}
