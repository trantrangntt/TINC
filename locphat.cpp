#include<stdio.h>
int main (){
	int a,t,m;
	scanf("%d",&t);
	for (int i=0; i<t; i++){
		scanf("%d",&a);
		int ktra=1;
		while (a>0){
			m=a%10;
			if (m!=0 && m!=6 && m!=8 ) {
				printf("NO");
				ktra=0;
				break;
			}
			a=a/10;
		}
		if (ktra ==1) printf("YES");
		printf("\n");
	}
}
