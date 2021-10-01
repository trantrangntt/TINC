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
	for (int i=0; i<a; i++){
		for (int j=i; j<b; j++){
			printf("%c",j+64);
		}
		for (int h=0; h<i; h++){
			printf("%c",b-1+64);
		}
		printf("\n");
	}
	if (c>a){
		for (int i=a; i<c; i++){
			for (int j=0; j<b; j++){
				printf("%c",b-1+64);
			}
			printf("\n");
		}
	}
	return 0;
}

