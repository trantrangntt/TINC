#include<stdio.h>
#include<math.h>
main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
//	if(a==0){
//		if(b==0&&c!=0){
//			printf("NO");}
//		if(b!=0&&c!=0){
//			printf("%.2f",-c/b);}
//		if(b!=0&&c==0){
//			printf("0");}
//	}	else	{
			float delta=b*b-4*a*c;
			if(delta<0){
				printf("NO");}
			if(delta==0){
				printf("%.2f",-b/(2*a));
			}
			if(delta>0)	{
					printf("%.2f %.2f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
				}
	}

