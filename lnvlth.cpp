#include<stdio.h>
int main(){
	int t,c;
	scanf("%d",&t);
	int a[t];
	for (int i=0; i<t ; i++)
		scanf("%d",&a[i]);
	for (int i=0; i<t ; i++){
		for (int j=i+1; j<t; j++){
			if (a[i]< a[j]){
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
			}
		for (int i=0; i<t; i++)
		printf ("%d %d",a[0],a[1]);
	}
	
}

