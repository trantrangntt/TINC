#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[18];
		gets(s);
		int ktra=1,h=strlen(s);
		for(int i=0; i<h; i++){
			if((s[0]-'0')*2!=(s[h-1]-'0') && (s[h-1]-'0')*2!=(s[1]-'0') || s[0]-'0'==s[h-1]-'0' ){
				ktra=0;
				break;
			}
			if (i>0 && i<=h-2){
				if (s[i]!=s[h-i-1]){
					ktra=0;
					break;
				}
			}
		}
		if(ktra==1) printf("YES\n");
		else printf("NO\n");
	}
}
