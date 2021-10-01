#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int dem1,dem2;
	for (int i=1; i<=n; i++){	
		dem2=n-1;
		dem1=n-1;
		for (int j=1; j<=i; j++){
			if (j==1) printf("%d",i);
			else {
				
				printf("%d",i+dem1);
				dem2--;
				dem1=dem1+dem2;
			}
			
		}
		printf("\n");
	}
	return 0;
}



