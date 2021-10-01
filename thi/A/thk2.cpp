#include<stdio.h>
#include<math.h>
#include<string.h>
int snt(int n){
	if(n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0)	return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	int tong=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<=i; j++){
			if (snt(a[i][j])==1)	{
				tong+=a[i][j];
			}
		}
	}
	if (tong==0)	 printf("0");
	else printf("%d",tong);
	return 0;
}

