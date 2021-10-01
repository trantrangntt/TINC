#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while (t--){
		char s[20];
		gets(s);
		int ktra=1,tong=0;
		int h=strlen(s);
		for (int i=0; i<h; i++){
			if (s[i]!=s[h-i-1] || s[i]-'0'%2==0 ){
				ktra=0;
				break;
			}
			tong =tong + (s[i]-'0');
		}
		if (ktra==1 && tong %2!=0 )		printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}

