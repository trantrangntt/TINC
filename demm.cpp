#include<stdio.h>
int ucln(int a, int b){
	while (a!=b){
		if (a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int a,b;
	scanf("%d%d",&a,&b);
	int c=ucln(a,b);
	printf("%lld ",(long long)a*b/c);
	printf("%d",c);
	printf("\n");
	}
}

