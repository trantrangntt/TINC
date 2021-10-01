#include<stdio.h>
int tn(int n){
	int temp=0;
	int h;
	h=n;
	int m;
	while (n>0){
		m=n%10;
		if (m==9) break;
		temp=temp*10+n%10;
		n/=10;
	}
	if (temp==h) return 1;
	return 0;
}
int main(){
	
	int n;
	int dem=0;
	scanf("%d",&n);
	for (int i=2; i<=n;i++){
		if (tn(i) )   printf("%d ",i);
	}
	for (int i=2; i<=n;i++){
		if (tn(i) )   dem++;
	}
	printf("\n%d",dem);
return 0;
}
