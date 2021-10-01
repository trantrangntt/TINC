#include<stdio.h>
#include<math.h>
#include<string.h>
int nt(int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int a[50][50];
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++){
		for (int j=0; j<t; j++){
			scanf("%d",&a[i][j]);
		}
	}
	int s=0;
	for (int i=0; i<t; i++){
		for (int j=i; j<t; j++){
			if ( nt(a[i][j]) ) 	s+=a[i][j];
		}
	}
	printf("%d",s);
	return 0;
}

