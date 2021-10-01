#include<stdio.h>
#include<math.h>
int snt(int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
		}
		return 1;
}
int ts(int n){
	int m;
	int t=0;
	while(n>0){
		m=n%10;
		t+=m;
		if (snt(m)==0) return 0;
		n/=10;
	}
	if (snt(t)==0) return 0;
	return 1;
}
//int tcs(int n){
//	int t=0,m;
//	while (n>0){
//		m=n%10;
//		t+=m;
//		n/=10;
//	}
//	if (snt(t)==1) return 1;
//	return 0;
//}
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int dem=0;
		for (int i=a; i<=b; i++){
			if (snt(i)==1 && ts(i)==1) dem++;
		}
		printf("%d",dem);
		printf("\n");
	}
	
}

