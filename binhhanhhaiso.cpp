#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=0; i<a; i++){
		for (int h=0; h<=i-1; h++){
			printf("~");
		}
		
		if( i==0 || i==a-1 ) for (int j=0; j<b; j++) printf("*");
		else 
			for (int j=0; j<b; j++){
				if( j==0 || j==b-1)
				printf("*");
				else printf(".");
		}
		printf("\n");
	}
}
