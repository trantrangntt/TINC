#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
//	if (a>b){
//		c=a;
//		a=b;
//	}
	for (int i=1; i<=a; i++){
		for (int j=b; j>=b-i+1; j--){
			printf("%c",j+96);
		}
		for (int j=b-i; j>=1; j--){
			printf("%c",a-i+1+96);
		}
		printf("\n");
	}
//	if (c>a) {
////		for (int i=a+1; i<=c; i++){
////			for (int j=b; j>=c-b-1; j--){
////				printf("%c",j+96);
////		for (int i=1; i<=a; i++){
////			for (int j=1; j<=b; j++) {
////				printf ()
////			}
////		}
////			}
////			printf("\n");
////		}
//	}
	return 0;
}

