#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	
	while (t--){
		char s[200];
		gets(s);
		int dem=0,h=0;
		for (int i=0; i<strlen(s); i++){
			if (s[i]==' ') {
				dem++;
				continue;
			}
			else h++;
		}
		printf ("%d",dem);
		printf ("\n");
	}
	
}

