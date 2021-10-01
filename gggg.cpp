#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],tg;
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int m=n;	
	while(n>0){
		for (int i=0;i<n-1;i++){
			if (a[i]>a[i+1]){
				tg=a[i];
				a[i]=a[i+1];
				a[i+1]=tg;
			}
		}
		n--;
	}
	for (int i=0;i<m;i++)
		printf("%d ",a[i]);
}
