#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	fflush;
	gets(s1);
	gets(s2);
	char a[100][100];
	int i=0; 
	char *p;
	const char *d=" ";
	for (p=strtok(s1,d); p!=NULL; p=strtok(NULL,d)){
		strcpy(a[i],p);
		i++;
	}
	for (int j=0; j<i; j++){
		if (strcmp(a[j],s2)!=0){
			printf("%s ",a[j]);
		}
	}
	return 0;
}

