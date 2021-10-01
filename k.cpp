#include<stdio.h>
int main(){
	int m,n,tong=0,gt=1;
	scanf("%d",&n);
	int a=n;
	while(n>0){
		m=n%10;
		for(int i=1;i<=m;i++){
			gt=gt*i;
		}
		tong=tong+gt;
		n=n/10;
	}
	if(tong==a)
	printf("1");
	else printf("0");
}
