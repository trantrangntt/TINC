#include<stdio.h>
int sg(int n){
	int m;
	int k;
	while (n>10){
		m=n%10;
		n/=10;
		if (m>=n%10 )return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int a,b;
		int dem=0;
		scanf("%d%d",&a,&b);
		for (int i=a; i<=b; i++){
			if (sg(i)) dem++;
		}
		printf("%d",dem);
		printf("\n");
	}
}

