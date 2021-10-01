#include<stdio.h>
int main(){
	int a,m,g=1,s=0;
	scanf("%d",&a);
	int t=a;
	while (a>0){
		g=1;
		m=a%10;
			for (int i=1; i<=m; i++)
			 	g=g*i;
			s+=g;
		a=a/10;
	}
	if (t==s) printf("1");
	else printf("0");
	
}
