#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	for (int k=1; k<=t; k++){
		int m,n,p;
		int a[100],b[100];
		scanf("%d%d%d",&m,&n,&p);
		for (int i=0; i<m; i++){
			scanf("%d",&a[i]);
		}
		for (int j=0; j<n; j++){
			scanf("%d",&b[j]);
		}
		printf("Test %d:\n",k);
		for(int i=0; i<m; i++){
			if (i==p) {
				for (int j=0; j<n; j++){
					printf("%d ",b[j]);
				}
			}
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}

