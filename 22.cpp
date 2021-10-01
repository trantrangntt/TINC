#include<stdio.h>
#define max 1000
int main(){
	int dem=0;
	char s[max];
	gets(s);
	for (int i=0; i<sizeof(s);i++){
		if (s[i]!= ' '){
			dem ++;
			continue;
		}
		printf("%d",dem);
		if (s[i]==' ') dem=0;
	}
}

