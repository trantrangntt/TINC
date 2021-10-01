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

	char a[100][100],b[100];
	int i=0,s=0;
	char *p;
	const char *d=" ";
	for(p=strtok(s1,d);p!=NULL;p=strtok(NULL,d)){
		strcpy(a[i],p);
		i++;
	}
	
	for(int j=0;j<i;j++)
	{
		int dem=1;
		int m=1;
		
		for(int k=0;k<j;k++)
		{
			if(strcmp(a[j],a[k])==0)
			{
				m=0;break;
			}
		}
		
		if(m==1)
		{
		
		for(int k=j+1;k<i;k++)
		{
			if(strcmp(a[j],a[k])==0) dem++;
		}
		b[s]=dem;
		s++;
		}
	}
	
	for(int h=0; h<i-1;h++){
		for(int j=h+1;j<i;j++){
			if(strcmp(a[h],a[j])==0){
				for(int k=j+1;k<i;k++){
					strcpy(a[k-1],a[k]);
				}
				i--;
				h--;
			}
		}
	}
	for(int j=0;j<i;j++){
		printf("%s %d\n",a[j],b[j]);
	}
	
	
	
}
