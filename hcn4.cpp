#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	if (a>b){
		c=a;
		a=b;
	}
	if (c>a){
		for (int m=c; m>=a+1; m--){
			for (int n=m; n>=m-b+1; n--){
				printf("%d",n);
			}
			printf("\n");
		}
	}
	for (int i=1; i<=a; i++){
		for (int j=b-i+1; j>=1; j--){
			printf("%d",j);
		}
		for (int h=2; h<=i; h++){
			printf("%d",h);
		}
		printf("\n");
	}
	return 0;
}

