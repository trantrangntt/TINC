#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int a,b; 
	scanf("%d%d",&a,&b);
	int k=b;
	if(a<=b){
	
		for (int i=1; i<=a; i++){	
			k=b;
			for (int j=1; j<=i; j++){
				printf("%c",k-1+97);
				k--;
			}
			for (int h=1; h<=b-i; h++){
				printf("%c",k+97);
			}
			printf("\n");
		}
	}
	else {
		for (int i=1; i<=b; i++){
			int m=a;
			for (int j=1; j<=i; j++){
				printf("%c",m-1+97);
				m--;
			}
			for (int h=1; h<=b-i; h++){
				printf("%c",m+97);
			}
			printf("\n");
		}
		for (int i=b+1; i<=a; i++){
			int n=a;
			for (int j=1; j<=b; j++){
				printf("%c",n+97-1);
				n--;
			}
			printf("\n");
		}
	}
	return 0;
}

