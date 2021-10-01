#include<stdio.h>
int st(int n){
	int h,m,s=0,g=1;
	h=n;
	while (n>0){
		g=1;
		m=n%10;
		for (int i=1; i<=m; i++)
			g=g*i;
			s+=g;
		n=n/10;
	}
	if (s!=h) return 0;
	return 1;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if (a<=b){
		for (int i=a; i<=b; i++){
			if (st(i)==1) printf("%d ",i);
		}
	
	}
	else
		 for (int i=b; i<=a; i++){
			if (st(i)==1) printf("%d ",i);
}
}

