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
	for (int i=0; i<t; i++){
		for (int j=0; j<i; j++){
			if (a[i]<a[j]){
				int c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
		printf("Buoc %d: ",i);
		for (int j=0; j<=i; j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
	return 0;
}

