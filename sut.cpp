#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while (t--){
		char s[1000];
		int demc=0,deml=0;
		gets(s);
		int h=strlen(s);
		int ktra=1;
		for (int i=0; i<h; i++){
			if(s[i]>'9' || s[i]<'0' || s[0]=='0'){
				ktra=0;
				break;
			}
			if ((s[i]-'0')%2==0)	demc++;
			else	deml++;
		}
		if (ktra==0) printf("INVALID\n");
	else{
			if (h%2!=0) 	if (deml>demc) printf("YES\n");
			    		 	else printf("NO\n");
			if (h%2==0) if (demc>deml ) printf("YES\n");
					else printf("NO\n");
			if (deml==demc)	printf("NO\n");
		}
	}
	return 0;
}

