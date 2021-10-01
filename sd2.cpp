#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while (t--){
		int tong=0, ktra=1;
		char s[500];
		gets(s);
		int h=strlen(s);
		for (int i=0; i<h; i++){
			tong= tong + (s[i]-'0');
			if (s[i]!=s[h-i-1] || s[0]!='8' || s[h-1]!='8'){
				ktra=0;
				break;
			}
		}
		if (ktra==1 && tong%10==0 ) printf("YES");
		else printf ("NO");
		printf("\n");
	}
	return 0;
}

