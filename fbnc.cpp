#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	//int a;
	int a[10000];
	a[0]=1;
	a[1]=1;
	int k=2,m=1;
	while (m<t){
		a[k]=a[k-1]+a[k-2];
		m=a[k];
		k++;
	}
//	printf ("%d",m);
	if (m==t) printf("1");
	else printf("0");
	
	
}

