#include<stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	for (int i=0; i<n; i++ ){
		int a,t,dem1=0,dem2=0;
		scanf("%d",&a);
			while(a>0){
				t=a%10;
				if (t%2==0){
				dem1 ++;
			}
				else dem2 ++;
				a=a/10;
		}
			printf("%d %d",dem2,dem1);
		printf("\n");
	
	}
}
