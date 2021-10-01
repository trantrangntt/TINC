#include<stdio.h>
#include<math.h>
int hh(int n){
	int s=1;
	if(n==1) return 0;
	for (int i=2; i<=sqrt(n); i++ ){
		if (n%i==0) s=s+n/i+i;
	}
	if (s!=n) return 0;
	return 1;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if (a<=b) for (int i=a; i<=b; i++){
		if (hh(i)==1) printf("%d ",i);
	}
	else for (int i=b; i<=a; i++){
		if (hh(i)==1) printf("%d ",i);
	}
	
}
