#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for (int i=1; i<=t; i++ ){
		for (int j=1; j<=t-i; j++){ 
			printf(" ");
		}
		for (int h=1; h<=i; h++){
			if (i==t || h==1 || h==i) {
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");
	}
	
}

