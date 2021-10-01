#include<stdio.h>
#include<math.h>
#include<string.h>
int skg(int n){
	int m;
	while(n>0){
		m=n%10;
		n/=10;
		if (m<(n%10)) return 0; 
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int n;
		scanf("%d",&n);
		for (int i=pow(10,n-1); i<pow(10,n); i++){
			if (skg(i)) printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}

