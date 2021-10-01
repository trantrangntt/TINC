#include<stdio.h>
#include<math.h>
#include<string.h>
int snt(int a){
	if (a<2) return 0;
	for (int i=2; i<=sqrt(a); i++){
		if (a%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d\n",&t);
	while (t--){
		char s[500];
		gets(s);
		int h=strlen(s);
		int ktra=1;
		for (int i=0; i<h; i++){
			if (s[i]!=s[h-i-1] || snt(s[i]-'0')==0){
				ktra=0;
				break;
			}
		}
		if (ktra==1)  printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}

