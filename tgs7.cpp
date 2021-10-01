#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for (int i=1; i<=t; i++){
		int d=t-1, k=0,a=i+d;
		for (int j=1; j<=i; j++){
			if (j==1) printf("%d ",i);
			else {
				printf("%d ", a);
				d--;
				a=a+d;
			}
		}
		printf ("\n");
	}
}

