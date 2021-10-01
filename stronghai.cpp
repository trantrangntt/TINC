#include<stdio.h>
int main(){
	int a,g,s=0,m,t;
	scanf("%d",&a);
	for (int i=1; i<a; i++){
		t=i;
		while (i>0){
			g=1;
			m=i%10;
			for (int j=1; j<=m; j++) g=g*j;
			s=s+g;
			i=i/10;
		}
		if (i==s) printf("%d ",i);
	}
}

