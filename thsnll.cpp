#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		char s1[500],s2[500],s[500];
		gets(s1);
		scanf("\n");
		gets(s2);
		s=s1+s2;
		printf("%s",s);
	}
	return 0;
}

