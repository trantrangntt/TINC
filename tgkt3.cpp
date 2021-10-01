#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		int dem2=n-1;
		int dem1=n-1;
		for (int j=1; j<=i; j++){
		if (j==1) printf("%c",i+64);
		if (j!=1){
			
			printf("%c ",i+dem1+64);
			dem2--;
			dem1+=dem2;
		}
		}
		printf("\n");
	}
	return 0;
}

