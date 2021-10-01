#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		for (int j=n-i; j<=2*(n-i); j++){
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}

