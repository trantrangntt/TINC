#include<stdio.h>
#include<math.h>
int main (){
	int n, ktra=1;
	scanf("%d",&n);
	int a[n];
	for (int i=1 ; i<=n ; i++){
		scanf("%d",&a[i]);
	}
	for (int i=1; i<=n; i++){
		for (int j=2; j<=sqrt(a[i]); j++){
			if ( a[i]%j==0){
				ktra=0;
				break;
			}
		}
		if (ktra==1) printf("%d ",a[i]);
	}
}
