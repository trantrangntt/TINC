#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		int ktra=1;
		char s[20];
		gets(s);
		for (int i=0; i<strlen(s); i++){
			if (s[i]!=s[strlen(s)-2]) {
				ktra=0;
				break;
			}
		}
		if (ktra==0) printf("YES");
		else ("NO");
		printf("\n");
	}
	return 0;
}

