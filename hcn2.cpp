#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int a, b,c;
	scanf("%d%d",&a,&b);
	if (a>b){
		c=a;
		a=b;
	}
	for (int i=1; i<=a; i++){
		for(int j=i; j<=b; j++){
			printf("%d",j);
		}
		for (int h=b-1; h>b-i; h--){
			printf("%d",h);
		}
		printf("\n");
	}
	if (c>b) {
		for (int i=b+1; i<=c; i++){
			
			for (int j=i; j>=i-b+1; j--){
				printf("%d",j);
			}
			printf("\n");
		}
	}
	return 0;
}

