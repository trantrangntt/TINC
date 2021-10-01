#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int a[t];
	for (int i=0; i<t; i++){
		scanf("%d",&a[i]);
	}
	for (int i=0; i<t; i++){
		int dem=1,ktra=1;
//		for (int j=0; j<i; j++){
//			if (a[i]==a[j])	{
//				ktra=0;
//				break;
//			}	 
//		}
		if (ktra==1){
			for (int j=i+1; j<t; j++){
				if (a[i]==a[j]) dem++;
			}
			printf ("%d %d",a[i],dem);
			printf ("\n");
		}
	}
}
