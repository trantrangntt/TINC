#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	int a[100];
	for (int i=0; i<t; i++){
		scanf("%d",&a[i]);
	}
	int dem=0;
	for (int i=0; i<t; i++){
		for (int j=i+1; j<t; j++){
			if (a[i]!=a[j]) dem++;
		}
	}
	printf ("%d",dem);
	return 0;
}

