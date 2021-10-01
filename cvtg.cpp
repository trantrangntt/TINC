#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		float a1,b1,a2,b2,a3,b3;
		scanf("%f%f%f%f%f%f",&a1,&b1,&a2,&b2,&a3,&b3);
		float a,b,c,cv,p;
		a=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
		b=sqrt((a2-a3)*(a2-a3)+(b2-b3)*(b2-b3));
		c=sqrt((a3-a1)*(a3-a1)+(b3-b1)*(b3-b1));
	//	p=(a+b+c)/2;
		//cv=sqrt(p*(p-a)*(p-b)*(p-c));
		cv=sqrt((a+b+c)*(a+b-c)*(b+c-a)*(a-b+c));
		if (a+b<=c || b+c<=a || a+c<=b) printf("INVALID");
		
		else printf("%.2f",cv/4);
		printf("\n");
	}
	return 0;
}

