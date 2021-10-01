#include<stdio.h>
#include<math.h>
int nto(int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int tong(int n){
	int m,s=0;
	while (n>0){
		m=n%10;
		s+=m;
		n/=10;
	}
	if (s%5==0) return 1;
	return 0;
}
int main(){
	int t,dem=0;;
	scanf("%d",&t);
	for (int i=1; i<=t; i++){
		if (nto(i)==1 && tong(i)==1) printf("%d ",i);
	}
	printf ("\n");
	for (int i=1; i<t; i++){
		if (nto(i)==1 && tong(i)==1) dem++;
	}
	printf("%d",dem);
}

