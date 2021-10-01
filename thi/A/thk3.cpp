#include<stdio.h>
#include<math.h>
int nto(int x){
	if (x==1) return 0;
	for (int i=2;i<=sqrt(x);i++){
		if (x%i==0) return 0;
	}
	return 1;
}
int fi(int n){
	int x=1,y=2,m;
	if (n==1 || n==2) return 1;
	while (y<n){
		m=y;
		y=y+x;
		x=m;
	}
	if (y==n) return 1;
	return 0;	
}
int tcs(int n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
int main(){
	int a,b,m;
	scanf("%d %d",&a,&b);
	if (a>b) {
		m=a;
		a=b;
		b=m;
	}
	for (int i=a;i<=b;i++){
		if (nto(i)==0) continue;
		else
			if (fi(tcs(i))==1) printf("%d ",i);
			else continue;
	}
}
