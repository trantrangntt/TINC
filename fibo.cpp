#include<stdio.h>
//int fibo(int n){
//	int t;
//	scanf("%d",&n);
//	
//}
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int n; 
		scanf ("%d", &n)
		int a[n];
		a[0]=1;
		a[1]=1;
		dem=1;
		while (dem<=n){
			for (int i=0; i<n; i++){
				if(i>2) a[i]=a[i-1]+a[i-2];
				printf("%d",a[i]);
			}
		}
	}
	
}

