#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++){
		double x1,y1,x2,y2;
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		double h;
		h=(double)sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		printf("%.4lf",h);
		printf("\n");
	}
	
}

