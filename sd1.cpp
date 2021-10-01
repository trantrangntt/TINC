#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		int ktra=1;
		char s[500];
		gets(s);
		int h=strlen(s);
		for (int i=0; i<h; i++){
			if (s[i]!=s[h-i-1] || s[i]%2!=0){
				ktra=0;
				break;
			}
		}
		if (ktra==1)	printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;	
}

