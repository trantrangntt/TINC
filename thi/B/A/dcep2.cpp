#include<stdio.h>
#include<string.h>
#include<ctype.h>
char email[50][50];
int t;
void xuly(char s[], int dem){
	char a[50][50],ds[50]="";
	
	int n=0;
	char *p=strtok(s," ");
	while(p!=NULL){
		for(int i=0;i<strlen(p);i++) p[i]=tolower(p[i]);
		strcpy(a[n],p);
		n++;
		p=strtok(NULL," ");
	}
	
	strcat(ds,a[n-1]);
	for(int i=0;i<n-1;i++) strncat(ds,a[i],1);
	strcpy(email[dem],ds);
}
void in(){
	int d;
	for(int i=0;i< t;i++){
        printf("%s",email[i]);
        d=0;
        for(int j=i;j>=0;j--)
            if(strcmp(email[i],email[j])==0) d++;
        if(d>1) printf("%d",d);
        printf("@ptit.edu.vn\n");
    }
}
int main(){
	char a[100],b[10];
    scanf("%d",&t); gets(b);
    for(int i=0;i<t;i++){
        gets(a);
        xuly(a,i);
    }
    in();
}
