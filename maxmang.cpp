#include<stdio.h>
int main (){
	int t,max,j;
	scanf("%d",&t);
	for (int i=0; i<t; i++){
		int n;
		scanf("%d",&n);
		int a[n];
		for (int j=0; j<n; j++){
			scanf("%d",&a[j]);
			max=a[0];
		}
		for (int j=1; j<n; j++ ){
			if ( a[j]>max) {
				max= a[j];
			}
			
		}
		printf("%d\n",max);
		printf("%d ",j);
			printf("\n");
		}
		
	}
