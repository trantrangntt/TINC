#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int a[1000],b[1000];
	int m,n;
	scanf("%d%d",&m,&n);
	for (int i=0; i<m; i++){
		scanf("%d",&a[i]);
	}
	for (int i=0; i<n; i++){
		scanf("%d",&b[i]);
	}
	int v;
	scanf("%d",&v);
	for (int i=0; i<v; i++){
		printf ("%d ",a[i]);
	}
	for (int i=0; i<n; i++){
		printf("%d ",b[i]);
	}
	for (int i=v; i<m; i++){
		printf("%d ",a[i]);
	}
	return 0;
}

