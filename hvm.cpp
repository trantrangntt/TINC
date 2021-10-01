#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		for (int j=n; j>n-i; j--){
			printf("%d",j);
		}
		for (int k=n-1; k>=n-i; ){
			printf("%d",k);
		}
		printf("\n");
	}
	
}

