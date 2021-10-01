#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n==2||n==6)printf("20");
		if(n==3||n==5)printf("38");
		if(n==4)printf("50");
		if(n==7)printf("8");
		if(n==9)printf("0");
		if(n==8)printf("5");
		printf("\n");
	}
}
