#include<stdio.h>
#include<math.h>
#include<string.h>
int ts(int n){
	for(int i=2; i<=sqrt(n); i++){
		if (n%i==0) return i;
	}
	return n;
}
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int n;
		scanf("%d",&n);
		int a[1000];
		int k=0;
		while (n>1){
			a[k]=ts(n);
			k++;
			n=n/ts(n);
		}
		int tich=1;
		for (int i=0; i<k; i++){
			int ktra=1;
			for (int j=0; j<i; j++){
				if (a[i]==a[j]){
					ktra=0;
					break;
				}
			}
			if (ktra==1)	tich=tich*a[i];
		}
		printf("%d\n",tich);
	}
}


