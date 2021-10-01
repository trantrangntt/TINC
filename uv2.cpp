#include<stdio.h>
int main(){
	int a,m,n,d;
	scanf("%d",&a);
	for (int i=0; i<a; i++){
		scanf("%d%d",&m,&n);
		d=m*n;
		if (m>=n) m-n=m;
		if (m<n) n-m=m;
		printf("%d %d",m,d/m);
		printf("\n");
			
	}
}

