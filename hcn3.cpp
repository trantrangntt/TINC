#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	if (a>b) {
		c=a;
		a=b;
	}
	for (int i=1; i<=a; i++){
		for (int j=i; j>=1; j--){
			printf("%d",j);
		}
		for (int h=2; h<=b-i+1; h++){
			printf("%d",h);
		}
		printf("\n");
	}
	if (c>a){
		for (int i=a+1; i<=c; i++){
			for (int j=i; j>=i-b+1; j--){
				printf("%d",j);
			}
			printf("\n");
		}
	}
	return 0;
}

