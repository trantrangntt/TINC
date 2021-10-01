#include<stdio.h>
int main(){
	int a,b,c,d=0;
	scanf("%d",&a);
	if (a>=365){
		d=a/365;
		b=(a-d*365)/7;
		c=a-d*365-b*7;
	}
	else {
		b=a/7;
		c=a-b*7;
	}
	printf("%d %d %d",d,b,c);
}

