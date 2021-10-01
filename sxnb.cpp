#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n,c;
	scanf("%d",&n);
	int a[n];
	for (int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int b=1;
	int m=n;
	while (n--){
		int dem=0;
    	for (int i=0; i<m-1; i++){
			if (a[i]>a[i+1]){
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
				dem++;
			}
		}

		if (dem>0){
			printf("Buoc %d: ",b);
			b++;
			for (int i=0; i<m; i++){
				printf("%d ",a[i]);	
			}
			printf("\n");
		}
	}
	return 0;
}

