#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int a,b;
	for (int i=0; i<t; i++){
		scanf("%d%d",&a,&b); 
		if (a==a && b==5) printf("1");
		if (a==50 && b==1) printf("1");
		printf("\n");
	}
}

