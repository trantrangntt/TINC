#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	
	if(a>b){
		c=a;
		a=b;
	}
	if (c>a){
		for (int i=c; i>=a+1; i--){
			for (int j=1; j<=b; j++){
				printf("%c",b+64);
			}
			printf("\n");
		}
	}
	for (int i=a; i>=1; i--){
		for(int j=i; j<=b; j++){
			printf("%c",j+64);
		}
		for (int h=1; h<=i-1; h++){
			printf("%c",b+64);
		}
		printf("\n");
	}
	return 0;
}

