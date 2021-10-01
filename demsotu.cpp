#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n", &t);
	while (t--){
		int count=1;
		char s[200];
		gets(s);
		for (int i=0; i<strlen(s) - 1; i++){
			if (s[i]==' ' && s[i+1]!= ' ')
				count++;
		}
		printf ("%d",count);
		printf("\n");
	}
}

