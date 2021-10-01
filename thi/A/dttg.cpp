#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double xa,ya,xb,yb,xc,yc;
		scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&xb,&yb,&xc,&yc);
		double a,b,c,s;
		a=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
		b=sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
		c=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
		s=sqrt((a+b+c)*(a+b-c)*(a-b+c)*(b+c-a))/4;
		
		if(a+b<=c||a+c<=b||b+c<=a) printf("INVALID");
		else printf("%.2lf",s);
	
		printf("\n");
	}
}
