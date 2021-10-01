#include<stdio.h>
#include<math.h>
#include<string.h>
int nt(int n){
	if(n<2)	return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int csnt(int n){
	if (nt(n)==0)	return 0;
	while(n>0){
		int m=n%10;
		n/=10;
		if (nt(m)==0)	return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int dem=0;
		int a,b;
		scanf("%d%d",&a,&b);
		for(int i=a; i<=b; i++){
			if (csnt(i)) dem++;
		}
		printf("%d\n",dem);
	}
	return 0;
}

