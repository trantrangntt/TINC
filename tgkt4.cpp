#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		for (int j=1; j<=2*i-1; j+=2){
			printf("%c",j+63);
		}
		for (int k=2*i-3; k>=1; k-=2){
			printf("%c",k+63);
		}
		printf("\n");
	}
	return 0;
}

