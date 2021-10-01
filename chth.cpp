#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while (t--){
		char n;
		scanf("%c\n",&n);
		if (n<='z' && n>='a') printf("%c\n",n-32);
		if (n<='Z' && n>='A') printf("%c\n",n+32);
	}
	
}


