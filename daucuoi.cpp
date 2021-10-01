#include<stdio.h>
int main(){
	int a,m,t,h; 
	scanf("%d",&a);
	t=a;
	m=a%10;
	while(t>10){
		t=t/10;
	}
	printf("%d %d",t,m);
}
