#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int min;
	min=c;
	if (a<min) min=a;
	if (b<min) min=b;
	printf("%d", min);
	
}

