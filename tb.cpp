#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int a[t];
	int s=0;
	for (int i=0; i<t; i++){
		scanf("%d",&a[i]);
	}
	for (int i=0; i<t; i++){
		s+=a[i];
	}
	printf ("%.3f",(float)s/t);
}

