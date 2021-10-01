#include<stdio.h>
int main (){
	int n ;
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		for (int h=n-1; h>i; h--){
			printf("~");
		}	
		for (int j=0; j<n; j++){
			
			printf("*");
		}
		printf("\n");
	}
}
