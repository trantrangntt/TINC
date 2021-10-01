#include<stdio.h>
int main (){
	int a,b,c,d=0;
	scanf("%d",&a);
	if(a>=365){
		d=a/365;
		c=(a-d*365)/7;
		b=(a-d*365-c*7);	
	}
	else {
		c=a/7;
		b=(a-c*7);
	}
	printf("%d %d %d",d,c,b);
}
