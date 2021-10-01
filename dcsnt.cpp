#include<stdio.h>
#include<math.h>
#include<string.h>
int snt(int n){
	if (n<2)	return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0)	return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	int	k=0;
	while (n>0){
		int m=n%10;
		if (snt(m)) {
			a[k]=m;
			k++;
		}
		n/=10;
	}
	for (int i=k-1; i>=0; i--){
		int dem=1;
		int ktra=1;
		for (int j=k-1; j>i; j--){
			if (a[i]==a[j]){
				ktra=0;
				break;
			}
		}
		if (ktra==1){
			for (int j=0; j<i; j++){
				if (a[i]==a[j]){
					dem++;
				}
			}
			printf("%d %d",a[i],dem);
			printf("\n");
		}
	}
	return 0;
}

