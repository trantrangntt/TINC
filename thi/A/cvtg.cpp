#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		float xa,ya,xb,yb,xc,yc;
		scanf("%f %f %f %f %f %f",&xa,&ya,&xb,&yb,&xc,&yc);
		float a,b,c,s;
		a=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
		b=sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
		c=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
		s= a+b+c;
		
		if(a+b<=c||a+c<=b||b+c<=a) printf("INVALID");
		else printf("%.3f",s);
	
		printf("\n");
	}
}
