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
		for (int j=i; j<=b; j++){
			printf("%d",j);
		}
		for (int h=i-1; h>=1; h--){
			printf("%d",h);
		}
		printf("\n");
	}
	
	if (c>b){
		for (int i=b+1; i<=c; i++){
			int d=b-1;
			for (int j=1; j<=b; j++){
				if (j==1) printf("%d",i);
				
				
				if (j!=1){
				printf("%d",d);
				d--;
			}
			}
			printf("\n");
		}
	}
	return 0;
}

