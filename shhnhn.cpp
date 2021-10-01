#include<stdio.h>
int hh(int n){
	int s=0;
	for (int i=1; i<=n/2; i++ ){
		if (n%i==0) s+=i;
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

