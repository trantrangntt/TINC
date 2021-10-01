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
	for (int i=1; i<=a; i++){
		for (int j=i; j<=b; j++){
			printf("%c",j+64);
		}
		for (int h=i-1; h>=1; h--){
			printf("%c",h+64);
		}
		printf("\n");
	}
	if (c>a){
		for (int i=b+1; i<=c; i++){
			for (int j=a; j>=1; j--){
				printf("%c",j+64);
			}
			printf("\n");
		}
	}
	return 0;
}

