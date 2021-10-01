#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int l=n;
	int c=n%10;
	int t,dem=1;
	while (n>10){
		t=n%10;
		dem++;
		n/=10;
	}
	int k=l-n*pow(10,dem-1) + c*pow(10,dem-1) -c +n;
	printf("%d",k);
	return 0;
}

