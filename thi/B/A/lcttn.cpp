#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	gets(s1);


	char a[100][100];
	int i=0;
	char *p;
	const char *d=" ";
	for(p=strtok(s1,d);p!=NULL;p=strtok(NULL,d)){
		strcpy(a[i],p);
		i++;
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
		printf("%s ",a[j]);
	}
}
