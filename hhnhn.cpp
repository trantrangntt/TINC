#include<stdio.h>
#include<math.h>
int hh(int n){
	int s=1;
	for (int i=2; i<=sqrt(n); i++ ){
		if (n%i==0) s+=s+n/i+i;
	}
	if (s!=n) return 0;
	return 1;
}
int main(){
	int a;
	scanf("%d",&a);
	for (int i=1; i<=a; i++){
		if (hh(i)==1) printf("%d ",i);
	}
	
}
