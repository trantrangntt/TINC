#include<stdio.h>
#include<math.h>
#include<string.h>
int nt(int n){
	if(n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d\n",&t);
	while (t--){
		int ktra=1;
		char s[500];
		gets(s);
		int h=strlen(s);
		for (int i=0; i<h; i++){
			if ( s[i]!=s[h-i-1] || nt(s[i]-'0')!=1 ){		
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


