#include<stdio.h>
int main(){
	int t,m,dem=0;
	scanf("%d",&t);
	while (t>0){
		m=t%10;
		dem++;
		t=t/10;
	}
	printf("%d",dem);
}

