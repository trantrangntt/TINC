#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	float m,n;
	m=(float)(-b+sqrt(d))/(2*a);
	n=(float)(-b-sqrt(d))/(2*a);
	if (d<0) printf("NO");
	if (d==0) printf ("%.2lf",(float)-b/(2*a));
	if (d>0) printf ("%.2lf %.2lf",m,n);	
}

