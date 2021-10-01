#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	int a[t];
	for (int i=0; i<t; i++){
		scanf("%d",&a[i]);
	}
	for (int i=0; i<t-1; i++){
		for (int j=i+1; j<t; j++){
			if (a[i]>a[j]){
				int k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
		printf("Buoc %d: ", i+1);
		for(int i=0; i<t; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}

