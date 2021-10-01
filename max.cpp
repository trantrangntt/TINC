#include<stdio.h>
int main (){
	int a,b,c,max;
	scanf("%d%d%d",&a,&b,&c);
	max=c;
	if (a>max) max=a;
	if (b>max) max=b;
	printf("%d",max);
}
