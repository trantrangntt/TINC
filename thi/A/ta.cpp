#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while (t--){
	char s[200];
	int ktra=1;
	gets(s);
	int h=strlen(s);
	for (int i=0; i<h; i++){
		if (s[i]!= '4' || s[i]!='7'){
			ktra=0;
			break;
		}
	}
	if(ktra==1) printf("YES");
	else printf("NO");
	printf("\n");
	}
	return 0;
}

