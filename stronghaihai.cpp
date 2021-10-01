#include<stdio.h>
int gt(int n){
	int h,m,s=0,g;
	 h=n;
		while (n>0){
			g=1;
			m=n%10;
			for (int j=1; j<=m; j++) g=g*j;
			s=s+g;
			n=n/10;
		}
		if (s!=h) return 0;
	return 1;
}
int main(){
	int a;
	scanf("%d",&a);
	for (int i=1; i<=a; i++)
		if (gt(i)==1 ) {
		printf("%d ",i);
		
 	} 
	}
}

