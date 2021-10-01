#include<stdio.h>
int main (){
	int a;
	long long b;
	char c;
	float d;
	double e;
	scanf("%d%lld %c %f%lf",&a,&b,&c,&d,&e);
	printf("%d %lld %c %0.3f %0.7lf",a,b,c,d,e);
}
