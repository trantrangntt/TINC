#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++){
		int n;
		scanf("%d",&n);
		int a[100];
		for (int j=0; j<n; j++){
			scanf("%d",&a[j]);
		}
		int max=0;
		for (int j=0; j<n; j++){
			 if (a[j]>max) max=a[j];
		}
		printf("%d\n",max);
		for (int j=0; j<n; j++){
			if (a[j]==max) {
				printf("%d ",j);
			}
			
		}
		printf("\n");
	}
}

