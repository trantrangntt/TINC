#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
		if (i==n){
			for (int j=n; j>=1; j--){
				printf("%d",j);
			}
			for (int h=2; h<=n; h++){
				printf("%d",h);
			}
			printf("\n");
		}
		else{
		for (int j=n; j>=n-i+1; j--){
			printf("%d",j);
		}
		for(int h=i+1; h<=2*n-i-1; h++){
			printf("%d",n-i+1);
		}
		int m=n-i+1;
		for (int k=1; k<=i; k++){
			printf("%d",m);
			m++;
		}
		printf("\n");
	}
}
for (int i=1; i<n; i++){
		int c=n;
		for (int j=1; j<=n-i; j++){
			printf("%d",c--);
		}
		c++;
		for (int h=1; h<=2*i-1; h++){
			printf("%d",c);
		}
		for (int k=1; k<=n-i; k++){
			printf("%d",c++);
		}
		printf("\n");
	}
	return 0;
}

