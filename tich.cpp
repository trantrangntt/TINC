#include<stdio.h>
int main(){
	int a,p=1,m;
	scanf("%d",&a);
	while (a>0){
		m=a%10;
		p=p*m;
		a=a/10;
	}
	printf("%d",p);
}

