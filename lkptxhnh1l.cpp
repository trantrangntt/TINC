#include<stdio.h>
#include<math.h>
#include<string.h> 
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	int dem2=0;
	for (int i=0; i<n; i++){
		int ktra=1;
		int dem=0;
		for (int j=0; j<i; j++){
			if (a[i]==a[j]) {
				ktra=0;
				break;
			}
		}
		if (ktra==1) {
			for (int j=i+1; j<n; j++){
				if (a[i]==a[j]){
					dem++;
					break;
				}
			}
		}
		if (dem!=0) dem2++;
	}
	printf("%d\n",dem2);
for (int i=0; i<n; i++){
		int ktra=1;
		for (int j=0; j<i; j++){
			if (a[i]==a[j]) {
				ktra=0;
				break;
			}
		}
		if (ktra==1) {
			for (int j=i+1; j<n; j++){
				if (a[i]==a[j]){
					printf("%d ",a[i] );
					break;
				}
			}
		}
	
	}
	return 0;
}

