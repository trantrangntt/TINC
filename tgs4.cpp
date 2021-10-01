#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for (int i=1; i<=t; i++){
		for (int m=1; m<=t-i; m++){
			printf("~");
		}
		for (int j=1; j<=2*i-1; j+=2){
			printf ("%d",j);
		}
		for (int h=2*i-3; h>=1; h-=2){
			printf("%d",h);
		}
		printf("\n");
	}
}

