#include<stdio.h>
int main(){
	char s[1000];
	gets(s);
	int i=0,c=0,x=0, k=0;
	while ( s[i]!='\0'){
		if ( s[i]<='Z' && s[i]>='A' || s[i]>='a' && s[i]<='z') c++;
		else if (s[i]>='0' && s[i]<='9') x++;
			else k++;
	
		i++;
	}
	printf("%d %d %d",c,x,k);
	return 0;
}

